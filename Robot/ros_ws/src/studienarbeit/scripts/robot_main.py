#!/usr/bin/env python
# -*- coding: UTF-8 -*-
# necessary for proper environment detection and character formatting

import sys
import re
import socket
import copy
import rospy
import intera_interface
import moveit_commander
import moveit_msgs.msg
from intera_core_msgs.msg import InteractionControlCommand
from intera_motion_interface import (InteractionOptions, InteractionPublisher)
from intera_motion_interface.utility_functions import int2bool
import geometry_msgs.msg
import numpy as np
import json
from scipy.spatial.transform import Rotation as R
from std_msgs.msg import String
from moveit_commander.conversions import pose_to_list

# HOST = 'localhost'
HOST = '192.168.0.100'
# HOST = socket.gethostbyname(socket.gethostname())  # IP address of the computer in the local network
PORT = 9051


class RobotMain(object):
    def __init__(self):
        super(RobotMain, self).__init__()

        # setup TCP client
        sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)  # create TCP/IP socket
        server_addr = (HOST, PORT)
        # establish connection to server
        print 'establishing connection to', HOST, 'port', PORT
        sock.connect(server_addr)
        # set up local server variables
        self.sock = sock

        # remap joint states to proper directory (necessary fix for joint detection)
        joint_state_topic = ['joint_states:=/robot/joint_states']
        # initialize moveit commander
        print "building node"
        moveit_commander.roscpp_initialize(joint_state_topic)
        rospy.init_node('robot_main', anonymous=True)
        moveit_commander.roscpp_initialize(sys.argv)

        # setup interaction options
        print "setting up interaction control"
        i_opts = InteractionOptions()
        i_opts.set_interaction_control_active(0)  # turn off by default
        # publish interaction options
        i_pub = InteractionPublisher()
        i_pub.send_command(i_opts, 0)

        # instantiate a RobotCommander object
        robot = moveit_commander.RobotCommander()
        # set group name (right_arm for sawyer) for arm and instantiate MoveGroupCommander
        group_name = "right_arm"
        group = moveit_commander.MoveGroupCommander(group_name)

        # set up intera limb for easy joint state access
        limb = intera_interface.Limb('right')

        # add table to environment
        scene = moveit_commander.PlanningSceneInterface()
        rospy.sleep(2)
        p = geometry_msgs.msg.PoseStamped()
        p.pose.position.x = 0.0
        p.pose.position.y = -1.0
        p.pose.position.z = -0.20
        scene.add_box("table", p, (2.0, 2.0, -1.0))

        # set up local robot variables
        self.i_opts = i_opts
        self.i_pub = i_pub
        self.robot = robot
        self.group = group
        self.limb = limb

    def calibrate_pose(self):
        # go to pose with gripper and send to server with correct association
        # enable external interaction control and disable after every position recording
        self.enable_arm_interact()
        print "----- Press 'Enter' to record the first position -----"
        raw_input()
        self.disable_arm_interact()
        calibration = []
        rotation = [0, 0, 0, 1]  # set default rotation since it is not important for calibration
        calibration.extend(self.get_coords(self.group.get_current_pose()))
        calibration.extend(rotation)
        print calibration

        self.enable_arm_interact()
        print "----- Press 'Enter' to record the second position -----"
        raw_input()
        self.disable_arm_interact()
        calibration.extend(self.get_coords(self.group.get_current_pose()))
        calibration.extend(rotation)
        print calibration

        self.enable_arm_interact()
        print "----- Press 'Enter' to record the third position -----"
        raw_input()
        self.disable_arm_interact()
        calibration.extend(self.get_coords(self.group.get_current_pose()))
        calibration.extend(rotation)
        print calibration

        json_calibration = self.format_as_json(calibration, "default")

        # send all data
        self.sock.sendall(json.dumps(json_calibration).encode("utf8"))
        print "Calibration data has been sent."

    @staticmethod
    def get_coords(position):
        regex = str(position)
        coordinates = []
        coordinates += re.findall(r"([-]?[0-9]\.[0-9]*)", regex)
        coordinates = coordinates[:-4]
        print coordinates
        return coordinates

    def enable_arm_interact(self):
        print "ENABLING ARM INTERACTION"
        self.i_opts.set_interaction_control_active(1)
        self.i_pub.send_command(self.i_opts, 0)
        return

    def disable_arm_interact(self):
        print "DISABLING ARM INTERACTION"
        self.i_opts.set_interaction_control_active(0)
        self.i_pub.send_command(self.i_opts, 0)
        return

    def move_to_pose(self):
        # listen for pose goal from server
        print "Listening for coordinates..."
        data = json.loads(self.sock.recv(1024).decode("utf-8"))

        print "Coordinates received. Moving to pose goal..."
        # move to all pose goals after one another
        for i in range(len(data["coordinates"])):
            pose_coordinates = [data['coordinates'][i]['position']['x'],
                                data['coordinates'][i]['position']['y'],
                                data['coordinates'][i]['position']['z']]
            self.go_to_pose_goal(pose_coordinates)
            print "Press 'Enter' to move to next pose in goal."
            raw_input()

    def go_to_pose_goal(self, coordinates):
        # planning to move to a pose goal
        # move to desired pose for endeffector (cartesian coordinates)
        pose_goal = geometry_msgs.msg.Pose()
        pose_goal.orientation.w = 1.0  # default orientation since not important with current use case
        pose_goal.position.x = coordinates[0]
        pose_goal.position.y = coordinates[1]
        pose_goal.position.z = coordinates[2] + 0.3

        self.group.set_planning_time(10)
        plan = self.group.plan(pose_goal)
        planned = self.get_planning_state(plan)
        angles = self.limb.joint_angles()
        angles['right_j0'] = planned[0]
        angles['right_j1'] = planned[1]
        angles['right_j2'] = planned[2]
        angles['right_j3'] = planned[3]
        angles['right_j4'] = planned[4]
        angles['right_j5'] = planned[5]
        angles['right_j6'] = planned[6]

        self.limb.move_to_joint_positions(angles)
        # stop any residual movement
        self.group.stop()
        # clear all targets after pose planning
        self.group.clear_pose_targets()
        # robot wait for short time to synchronize threads
        rospy.sleep(0.5)

    @staticmethod
    def get_planning_state(data):
        regex = str(data)
        joints = []
        joints += re.findall(r"([-]?[0-9]\.[0-9]*)", regex)
        del joints[0:len(joints) - 21]
        del joints[len(joints) - 14:len(joints)]
        joints = [float(x) for x in joints]
        return joints

    def send_joint_positions(self):
        # calculate current joint positions and rotation
        print "Calculating joint positions and orientation..."
        positions = self.calc_joint_position(self.limb.joint_angles())
        # slice in half so payload won't go over maximum
        position_set_1 = positions[:28]
        position_set_2 = positions[28:]

        # format result as JSON
        json_positions1 = self.format_as_json(position_set_1, "joints")
        json_positions2 = self.format_as_json(position_set_2, "joints")

        # send positions to server
        print "Calculation done. Sending data to server..."
        self.sock.sendall(json.dumps(json_positions1).encode("utf8"))
        self.sock.sendall(json.dumps(json_positions2).encode("utf8"))

    @staticmethod
    def calc_joint_position(angles):
        joints = []

        """
        Denavit-Hartenberg table, gathered from: https://www.dtx-colab.pt/wp-content/uploads/2020/04/Faria-et-al.-2019-Automatic-Denavit-Hartenberg-Parameter-Identification-for-Serial-Manipulators-1.pdf
        and: https://sdk.rethinkrobotics.com/intera/Hardware_Components
        without gripper:
        
        joint | a in mm | α in ° | d in mm  |   θ in °
        ---------------------------------------------------
            1 |    81.0 |  -90.0 |   317.00 | variable
            2 |     0.0 |   90.0 |   192.50 | variable + 90°
            3 |     0.0 |  -90.0 |   400.00 | variable
            4 |     0.0 |   90.0 |  -168.50 | variable
            5 |     0.0 |  -90.0 |   400.00 | variable
            6 |     0.0 |   90.0 |   136.30 | variable
            7 |     0.0 |    0.0 |   133.75 | variable
        """
        # read joint states and save them to variables (already in radiant)
        theta_1 = angles['right_j0']
        theta_2 = angles['right_j1'] + 1.5708
        theta_3 = angles['right_j2']
        theta_4 = angles['right_j3']
        theta_5 = angles['right_j4']
        theta_6 = angles['right_j5']
        theta_7 = angles['right_j6']

        # set up DH table with a and d in m, since every other method deals in m
        dh_table = np.array([[0.081, np.deg2rad(-90), 0.317, theta_1],
                             [0.0, np.deg2rad(90), 0.1925, theta_2],
                             [0.0, np.deg2rad(-90), 0.400, theta_3],
                             [0.0, np.deg2rad(90), -0.1685, theta_4],
                             [0.0, np.deg2rad(-90), 0.400, theta_5],
                             [0.0, np.deg2rad(90), 0.1363, theta_6],
                             [0.0, np.deg2rad(0), 0.13375, theta_7]])

        """
        Transformation matrices i-1 to i
        ᵢ₋₁Tᵢ = --                                                   --
               | cos θᵢ   -sin θᵢ·cos αᵢ    sin θᵢ·sin αᵢ   aᵢ·cos θᵢ |
               | sin θᵢ    cos θᵢ·cos αᵢ   -cos θᵢ·sin αᵢ   aᵢ·sin θᵢ |
               |   0          sin αᵢ           cos αᵢ           dᵢ    |
               |   0            0                0              1     |
                --                                                  --
        """

        # Transformation Matrix j0 to j1
        i = 0
        trans_0_1 = np.array([[np.cos(dh_table[i, 3]), -np.sin(dh_table[i, 3]) * np.cos(dh_table[i, 1]),
                               np.sin(dh_table[i, 3]) * np.sin(dh_table[i, 1]),
                               dh_table[i, 0] * np.cos(dh_table[i, 3])],
                              [np.sin(dh_table[i, 3]), np.cos(dh_table[i, 3]) * np.cos(dh_table[i, 1]),
                               -np.cos(dh_table[i, 3]) * np.sin(dh_table[i, 1]),
                               dh_table[i, 0] * np.sin(dh_table[i, 3])],
                              [0, np.sin(dh_table[i, 1]), np.cos(dh_table[i, 1]), dh_table[i, 2]],
                              [0, 0, 0, 1]])

        # Transformation Matrix j1 to j2
        i = 1
        trans_1_2 = np.array([[np.cos(dh_table[i, 3]), -np.sin(dh_table[i, 3]) * np.cos(dh_table[i, 1]),
                               np.sin(dh_table[i, 3]) * np.sin(dh_table[i, 1]),
                               dh_table[i, 0] * np.cos(dh_table[i, 3])],
                              [np.sin(dh_table[i, 3]), np.cos(dh_table[i, 3]) * np.cos(dh_table[i, 1]),
                               -np.cos(dh_table[i, 3]) * np.sin(dh_table[i, 1]),
                               dh_table[i, 0] * np.sin(dh_table[i, 3])],
                              [0, np.sin(dh_table[i, 1]), np.cos(dh_table[i, 1]), dh_table[i, 2]],
                              [0, 0, 0, 1]])

        # Transformation Matrix j2 to j3
        i = 2
        trans_2_3 = np.array([[np.cos(dh_table[i, 3]), -np.sin(dh_table[i, 3]) * np.cos(dh_table[i, 1]),
                               np.sin(dh_table[i, 3]) * np.sin(dh_table[i, 1]),
                               dh_table[i, 0] * np.cos(dh_table[i, 3])],
                              [np.sin(dh_table[i, 3]), np.cos(dh_table[i, 3]) * np.cos(dh_table[i, 1]),
                               -np.cos(dh_table[i, 3]) * np.sin(dh_table[i, 1]),
                               dh_table[i, 0] * np.sin(dh_table[i, 3])],
                              [0, np.sin(dh_table[i, 1]), np.cos(dh_table[i, 1]), dh_table[i, 2]],
                              [0, 0, 0, 1]])

        # Transformation Matrix j3 to j4
        i = 3
        trans_3_4 = np.array([[np.cos(dh_table[i, 3]), -np.sin(dh_table[i, 3]) * np.cos(dh_table[i, 1]),
                               np.sin(dh_table[i, 3]) * np.sin(dh_table[i, 1]),
                               dh_table[i, 0] * np.cos(dh_table[i, 3])],
                              [np.sin(dh_table[i, 3]), np.cos(dh_table[i, 3]) * np.cos(dh_table[i, 1]),
                               -np.cos(dh_table[i, 3]) * np.sin(dh_table[i, 1]),
                               dh_table[i, 0] * np.sin(dh_table[i, 3])],
                              [0, np.sin(dh_table[i, 1]), np.cos(dh_table[i, 1]), dh_table[i, 2]],
                              [0, 0, 0, 1]])

        # Transformation Matrix j4 to j5
        i = 4
        trans_4_5 = np.array([[np.cos(dh_table[i, 3]), -np.sin(dh_table[i, 3]) * np.cos(dh_table[i, 1]),
                               np.sin(dh_table[i, 3]) * np.sin(dh_table[i, 1]),
                               dh_table[i, 0] * np.cos(dh_table[i, 3])],
                              [np.sin(dh_table[i, 3]), np.cos(dh_table[i, 3]) * np.cos(dh_table[i, 1]),
                               -np.cos(dh_table[i, 3]) * np.sin(dh_table[i, 1]),
                               dh_table[i, 0] * np.sin(dh_table[i, 3])],
                              [0, np.sin(dh_table[i, 1]), np.cos(dh_table[i, 1]), dh_table[i, 2]],
                              [0, 0, 0, 1]])

        # Transformation Matrix j5 to j6
        i = 5
        trans_5_6 = np.array([[np.cos(dh_table[i, 3]), -np.sin(dh_table[i, 3]) * np.cos(dh_table[i, 1]),
                               np.sin(dh_table[i, 3]) * np.sin(dh_table[i, 1]),
                               dh_table[i, 0] * np.cos(dh_table[i, 3])],
                              [np.sin(dh_table[i, 3]), np.cos(dh_table[i, 3]) * np.cos(dh_table[i, 1]),
                               -np.cos(dh_table[i, 3]) * np.sin(dh_table[i, 1]),
                               dh_table[i, 0] * np.sin(dh_table[i, 3])],
                              [0, np.sin(dh_table[i, 1]), np.cos(dh_table[i, 1]), dh_table[i, 2]],
                              [0, 0, 0, 1]])

        # Transformation Matrix j6 to j7
        i = 6
        trans_6_7 = np.array([[np.cos(dh_table[i, 3]), -np.sin(dh_table[i, 3]) * np.cos(dh_table[i, 1]),
                               np.sin(dh_table[i, 3]) * np.sin(dh_table[i, 1]),
                               dh_table[i, 0] * np.cos(dh_table[i, 3])],
                              [np.sin(dh_table[i, 3]), np.cos(dh_table[i, 3]) * np.cos(dh_table[i, 1]),
                               -np.cos(dh_table[i, 3]) * np.sin(dh_table[i, 1]),
                               dh_table[i, 0] * np.sin(dh_table[i, 3])],
                              [0, np.sin(dh_table[i, 1]), np.cos(dh_table[i, 1]), dh_table[i, 2]],
                              [0, 0, 0, 1]])

        # Transformation Matrix j0 to jᵢ
        trans_0_2 = np.linalg.multi_dot([trans_0_1, trans_1_2])
        trans_0_3 = np.linalg.multi_dot([trans_0_1, trans_1_2, trans_2_3])
        trans_0_4 = np.linalg.multi_dot([trans_0_1, trans_1_2, trans_2_3, trans_3_4])
        trans_0_5 = np.linalg.multi_dot([trans_0_1, trans_1_2, trans_2_3, trans_3_4, trans_4_5])
        trans_0_6 = np.linalg.multi_dot([trans_0_1, trans_1_2, trans_2_3, trans_3_4, trans_4_5, trans_5_6])
        trans_0_7 = np.linalg.multi_dot([trans_0_1, trans_1_2, trans_2_3, trans_3_4, trans_4_5, trans_5_6, trans_6_7])

        # calculate all coordinate system positions and save to array
        base = np.array([0, 0, 0, 1])
        joints.extend(np.dot(trans_0_1, base))
        joints.extend(np.dot(trans_0_2, base))
        joints.extend(np.dot(trans_0_3, base))
        joints.extend(np.dot(trans_0_4, base))
        joints.extend(np.dot(trans_0_5, base))
        joints.extend(np.dot(trans_0_6, base))
        joints.extend(np.dot(trans_0_7, base))
        del joints[3::4]  # delete homogenous coordinate from list

        # get quaternions from matrices
        rot_0_1 = R.from_dcm([[trans_0_1[0, 0], trans_0_1[0, 1], trans_0_1[0, 2]],
                              [trans_0_1[1, 0], trans_0_1[1, 1], trans_0_1[1, 2]],
                              [trans_0_1[2, 0], trans_0_1[2, 1], trans_0_1[2, 2]]])
        rot_0_1 = np.ndarray.tolist(rot_0_1.as_quat())
        joints[3:3] = np.round(rot_0_1, 13)

        rot_0_2 = R.from_dcm([[trans_0_2[0, 0], trans_0_2[0, 1], trans_0_2[0, 2]],
                              [trans_0_2[1, 0], trans_0_2[1, 1], trans_0_2[1, 2]],
                              [trans_0_2[2, 0], trans_0_2[2, 1], trans_0_2[2, 2]]])
        rot_0_2 = np.ndarray.tolist(rot_0_2.as_quat())
        joints[10:10] = np.round(rot_0_2, 13)

        rot_0_3 = R.from_dcm([[trans_0_3[0, 0], trans_0_3[0, 1], trans_0_3[0, 2]],
                              [trans_0_3[1, 0], trans_0_3[1, 1], trans_0_3[1, 2]],
                              [trans_0_3[2, 0], trans_0_3[2, 1], trans_0_3[2, 2]]])
        rot_0_3 = np.ndarray.tolist(rot_0_3.as_quat())
        joints[17:17] = np.round(rot_0_3, 13)

        rot_0_4 = R.from_dcm([[trans_0_4[0, 0], trans_0_4[0, 1], trans_0_4[0, 2]],
                              [trans_0_4[1, 0], trans_0_4[1, 1], trans_0_4[1, 2]],
                              [trans_0_4[2, 0], trans_0_4[2, 1], trans_0_4[2, 2]]])
        rot_0_4 = np.ndarray.tolist(rot_0_4.as_quat())
        joints[24:24] = np.round(rot_0_4, 13)

        rot_0_5 = R.from_dcm([[trans_0_5[0, 0], trans_0_5[0, 1], trans_0_5[0, 2]],
                              [trans_0_5[1, 0], trans_0_5[1, 1], trans_0_5[1, 2]],
                              [trans_0_5[2, 0], trans_0_5[2, 1], trans_0_5[2, 2]]])
        rot_0_5 = np.ndarray.tolist(rot_0_5.as_quat())
        joints[31:31] = np.round(rot_0_5, 13)

        rot_0_6 = R.from_dcm([[trans_0_6[0, 0], trans_0_6[0, 1], trans_0_6[0, 2]],
                              [trans_0_6[1, 0], trans_0_6[1, 1], trans_0_6[1, 2]],
                              [trans_0_6[2, 0], trans_0_6[2, 1], trans_0_6[2, 2]]])
        rot_0_6 = np.ndarray.tolist(rot_0_6.as_quat())
        joints[38:38] = np.round(rot_0_6, 13)

        rot_0_7 = R.from_dcm([[trans_0_7[0, 0], trans_0_7[0, 1], trans_0_7[0, 2]],
                              [trans_0_7[1, 0], trans_0_7[1, 1], trans_0_7[1, 2]],
                              [trans_0_7[2, 0], trans_0_7[2, 1], trans_0_7[2, 2]]])
        rot_0_7 = np.ndarray.tolist(rot_0_7.as_quat())
        joints.extend(np.round(rot_0_7, 13))

        # add base
        joints.extend([0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0])

        return joints

    @staticmethod
    def format_as_json(data, usage_type):
        # data format: [posx, posy, posz, rotx, roty, rotz, rotw] (repeating)
        json_data = {"type": usage_type, "device": "robot", "coordinates": []}
        for x in range(len(data) / 7):
            i = x * 7
            json_data["coordinates"].append({
                "position": {
                    "x": data[i],
                    "y": data[i + 1],
                    "z": data[i + 2]
                },
                "rotation": {
                    "x": data[i + 3],  # im i
                    "y": data[i + 4],  # im j
                    "z": data[i + 5],  # im k
                    "w": data[i + 6]  # re
                }
            })

        return json_data


def main():
    print "----- Starting robot setup -----"
    rcontrol = RobotMain()

    try:
        print "----- Press 'Enter' to calibrate the robot with the server -----"
        raw_input()
        rcontrol.calibrate_pose()

        while True:
            print "Press '1' to enter arm control mode.\nPress '2' to enter display mode.\nPress '0' to exit."
            keypress = input("Selection: ")
            if keypress == 1:
                rcontrol.move_to_pose()
            elif keypress == 2:
                rcontrol.send_joint_positions()
            elif keypress == 0:
                break
            else:
                print "Wrong input. Try again."
                continue
        print "----- EXITING PROGRAM -----"

    except rospy.ROSInterruptException:
        rcontrol.sock.close()
        return

    except KeyboardInterrupt:
        rcontrol.sock.close()
        return

    rcontrol.sock.close()


if __name__ == '__main__':
    main()
