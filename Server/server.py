import socket
import numpy as np
import pandas as pd
from scipy.spatial.transform import Rotation as R
from pyquaternion import Quaternion
import thread
import json

# HOST = 'localhost'
HOST = '192.168.0.100'
# HOST = socket.gethostbyname(socket.gethostname())  # IP address of the computer in the local network
PORT = 9051  # Port to listen on (non-privileged ports > 1023)


def send_data(connection, data):
    connection.sendall(data.encode('utf8'))


def device_calibration(data):
    coordinates = data["coordinates"]
    device = data["device"]

    if device == "robot":
        x_coord = np.array([coordinates[0]["position"]["x"], coordinates[0]["position"]["y"],
                            coordinates[0]["position"]["z"]])  # new x-axis peak point
        t_coord = np.array([coordinates[1]["position"]["x"], coordinates[1]["position"]["y"],
                            coordinates[1]["position"]["z"]])  # new 0-point (also translation vector
        y_coord = np.array([coordinates[2]["position"]["x"], coordinates[2]["position"]["y"],
                            coordinates[2]["position"]["z"]])  # new y-axis peak point
    else:
        x_coord = np.array([coordinates[0]["position"]["x"], coordinates[0]["position"]["z"],
                            coordinates[0]["position"]["y"]])  # new x-axis peak point
        t_coord = np.array([coordinates[1]["position"]["x"], coordinates[1]["position"]["z"],
                            coordinates[1]["position"]["y"]])  # new 0-point (also translation vector
        y_coord = np.array([coordinates[2]["position"]["x"], coordinates[2]["position"]["z"],
                            coordinates[2]["position"]["y"]])  # new y-axis peak point

    # because of slicing, convert data to numeric float
    x_coord = pd.to_numeric(x_coord, downcast='float')
    t_coord = pd.to_numeric(t_coord, downcast='float')
    y_coord = pd.to_numeric(y_coord, downcast='float')

    # verify proper calibration points
    check_x = np.subtract(x_coord, t_coord)
    check_y = np.subtract(y_coord, t_coord)
    check_cosine = np.dot(check_x, check_y) / np.linalg.norm(check_x) / np.linalg.norm(check_y)
    # cosine has to be close to 0 for a 90 degree angle
    print check_cosine

    # calculate turn value for angle
    u = np.subtract(y_coord, t_coord)  # new y
    v = np.array([0, 1, 0])  # old y
    angle_cosine = np.dot(u, v) / np.linalg.norm(u) / np.linalg.norm(v)  # returns cosine
    angle_sine = np.cross(u, v) / np.linalg.norm(u) / np.linalg.norm(v)  # returns sine
    # sine has to be accessed by array value, cause cross product creates 3-D array
    angle_sine = angle_sine[2]

    # set up transformation matrix with R_z(a) as rotation and t_coord as translation
    t_matrix = np.array([[angle_cosine, (angle_sine * (-1)), 0.0, t_coord[0]],
                         [angle_sine, angle_cosine, 0.0, t_coord[1]],
                         [0.0, 0.0, 1.0, t_coord[2]],
                         [0.0, 0.0, 0.0, 1.0]])

    # calculate inverse transformation to translate points from server back to robot
    inv_t_matrix = np.linalg.inv(t_matrix)

    # get rotation matrices from transformation matrices
    r_matrix = R.from_dcm([[t_matrix[0, 0], t_matrix[0, 1], t_matrix[0, 2]],
                           [t_matrix[1, 0], t_matrix[1, 1], t_matrix[1, 2]],
                           [t_matrix[2, 0], t_matrix[2, 1], t_matrix[2, 2]]])

    # get quaternions from rotation matrices
    t_quaternion = Quaternion(array=np.array(r_matrix.as_quat()))
    inv_t_quaternion = t_quaternion.inverse

    return t_matrix, inv_t_matrix, t_quaternion, inv_t_quaternion


class ServerMain(object):
    def __init__(self):
        print 'Server started and listening on', HOST, 'port', PORT
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        s.bind((HOST, PORT))
        s.listen(3)

        self.robot_t_matrix = np.array([])
        self.phone_t_matrix = np.array([])
        self.hololens_t_matrix = np.array([])

        self.robot_inv_t_matrix = np.array([])
        self.phone_inv_t_matrix = np.array([])
        self.hololens_inv_t_matrix = np.array([])

        # Wait for the 3 devices to connect
        for i in range(3):
            connection, address = s.accept()
            print "Connected by", address
            thread.start_new_thread(self.calibrate_device, (connection, address))

        # Wait for the 3 devices to send the initial data
        while True:
            if np.any(self.robot_t_matrix) and np.any(self.phone_t_matrix) and np.any(self.hololens_t_matrix):
                break

    def translate_point(self, data):
        parsed_json = json.loads(data)
        type = parsed_json["type"]
        device = parsed_json["device"]
        coordinates = parsed_json["coordinates"]
        data_to_send_device1 = {}
        data_to_send_device2 = {}
        coordinates_to_send_device1 = []
        coordinates_to_send_device2 = []

        if type == "default" or type == "joints":
            data_to_send_device1["type"] = type
            data_to_send_device2["type"] = type
        else:
            print "Wrong format!\n", data
            return

        if device == "robot":
            for i in coordinates:
                point_phone, point_hololens = self.translate_robot_point(i)
                coordinates_to_send_device1.append(point_phone)
                coordinates_to_send_device2.append(point_hololens)
            data_to_send_device1["coordinates"] = coordinates_to_send_device1
            data_to_send_device2["coordinates"] = coordinates_to_send_device2
            send_data(self.phone_connection, json.dumps(data_to_send_device1).encode("utf8"))
            send_data(self.hololens_connection, json.dumps(data_to_send_device2).encode("utf8"))
        elif device == "phone":
            for i in coordinates:
                point_robot, point_hololens = self.translate_phone_point(i)
                coordinates_to_send_device1.append(point_robot)
                coordinates_to_send_device2.append(point_hololens)
            data_to_send_device1["coordinates"] = coordinates_to_send_device1
            data_to_send_device2["coordinates"] = coordinates_to_send_device2
            send_data(self.robot_connection, json.dumps(data_to_send_device1).encode("utf8"))
            send_data(self.hololens_connection, json.dumps(data_to_send_device2).encode("utf8"))
        elif device == "hololens":
            for i in coordinates:
                point_robot, point_phone = self.translate_hololens_point(i)
                coordinates_to_send_device1.append(point_robot)
                coordinates_to_send_device2.append(point_phone)
            data_to_send_device1["coordinates"] = coordinates_to_send_device1
            data_to_send_device2["coordinates"] = coordinates_to_send_device2
            send_data(self.robot_connection, json.dumps(data_to_send_device1).encode("utf8"))
            send_data(self.phone_connection, json.dumps(data_to_send_device2).encode("utf8"))
        else:
            print "Wrong format!\n", data
            return

    def translate_robot_point(self, point):
        point_to_send_phone = {}
        point_to_send_hololens = {}

        rotation_to_send_phone = {}
        rotation_to_send_hololens = {}
        rotation_formatted = np.array([point["rotation"]["w"], point["rotation"]["x"], point["rotation"]["y"], point["rotation"]["z"]])
        rotation_formatted = pd.to_numeric(rotation_formatted, downcast='float')
        q_rotation = Quaternion(array=np.array(rotation_formatted))

        # calculate rotation in phone coordinate system
        rotation_phone = q_rotation * self.robot_inv_t_quaternion * self.phone_t_quaternion
        rotation_to_send_phone["x"] = np.round(float(np.float32(-rotation_phone[1])), 13)
        rotation_to_send_phone["y"] = np.round(float(np.float32(-rotation_phone[3])), 13)
        rotation_to_send_phone["z"] = np.round(float(np.float32(-rotation_phone[2])), 13)
        rotation_to_send_phone["w"] = np.round(float(np.float32(rotation_phone[0])), 13)

        # calculate rotation in hololens coordinate system
        rotation_hololens = q_rotation * self.robot_inv_t_quaternion * self.hololens_t_quaternion
        rotation_to_send_hololens["x"] = np.round(float(np.float32(-rotation_hololens[1])), 13)
        rotation_to_send_hololens["y"] = np.round(float(np.float32(-rotation_hololens[3])), 13)
        rotation_to_send_hololens["z"] = np.round(float(np.float32(-rotation_hololens[2])), 13)
        rotation_to_send_hololens["w"] = np.round(float(np.float32(rotation_hololens[0])), 13)

        position_to_send_phone = {}
        position_to_send_hololens = {}
        position_formatted = np.array([point["position"]["x"], point["position"]["y"], point["position"]["z"], 1])
        position_formatted = pd.to_numeric(position_formatted, downcast='float')

        # Calculate coordinates in absolute coordinate system
        np_position = np.array(position_formatted).transpose()
        position_absolute = self.robot_inv_t_matrix.dot(np_position).transpose()

        # Calculate coordinates in phone coordinate system
        position_phone = self.phone_t_matrix.dot(position_absolute).transpose()
        position_to_send_phone["x"] = float(np.float32(position_phone[0]))
        position_to_send_phone["y"] = float(np.float32(position_phone[2]))
        position_to_send_phone["z"] = float(np.float32(position_phone[1]))

        # Calculate coordinates in hololens coordinate system
        position_hololens = self.hololens_t_matrix.dot(position_absolute).transpose()
        position_to_send_hololens["x"] = float(np.float32(position_hololens[0]))
        position_to_send_hololens["y"] = float(np.float32(position_hololens[2]))
        position_to_send_hololens["z"] = float(np.float32(position_hololens[1]))

        point_to_send_phone["position"] = position_to_send_phone
        point_to_send_hololens["position"] = position_to_send_hololens

        point_to_send_phone["rotation"] = rotation_to_send_phone
        point_to_send_hololens["rotation"] = rotation_to_send_hololens

        return point_to_send_phone, point_to_send_hololens

    def translate_phone_point(self, point):
        point_to_send_robot = {}
        point_to_send_hololens = {}

        rotation_to_send_robot = {}
        rotation_to_send_hololens = {}
        rotation_formatted = np.array([point["rotation"]["w"],
                                       point["rotation"]["x"] * -1,
                                       point["rotation"]["z"] * -1,
                                       point["rotation"]["y"] * -1])
        rotation_formatted = pd.to_numeric(rotation_formatted, downcast='float')
        q_rotation = Quaternion(array=np.array(rotation_formatted))

        # calculate rotation in hololens coordinate system
        rotation_hololens = q_rotation * self.phone_inv_t_quaternion * self.hololens_t_quaternion
        print "Point:", point
        print "Hololens inverse:", self.hololens_inv_t_quaternion
        print "hololens", self.hololens_t_quaternion
        print "rotation hololens:", rotation_hololens
        print "Phone inverse:", self.phone_inv_t_quaternion
        print "Phone:", self.phone_t_quaternion
        print "formatted rotation", q_rotation
        rotation_to_send_hololens["x"] = np.round(float(np.float32(-rotation_hololens[1])), 13)
        rotation_to_send_hololens["y"] = np.round(float(np.float32(-rotation_hololens[3])), 13)
        rotation_to_send_hololens["z"] = np.round(float(np.float32(-rotation_hololens[2])), 13)
        rotation_to_send_hololens["w"] = np.round(float(np.float32(rotation_hololens[0])), 13)
        print json.dumps(rotation_to_send_hololens, indent=2)

        # calculate rotation in robot coordinate system
        rotation_robot = q_rotation * self.phone_inv_t_quaternion * self.robot_t_quaternion
        rotation_to_send_robot["x"] = np.round(float(np.float32(rotation_robot[1])), 13)
        rotation_to_send_robot["y"] = np.round(float(np.float32(rotation_robot[2])), 13)
        rotation_to_send_robot["z"] = np.round(float(np.float32(rotation_robot[3])), 13)
        rotation_to_send_robot["w"] = np.round(float(np.float32(rotation_robot[0])), 13)

        position_to_send_robot = {}
        position_to_send_hololens = {}
        position_formatted = np.array([point["position"]["x"], point["position"]["z"], point["position"]["y"], 1])
        position_formatted = pd.to_numeric(position_formatted, downcast='float')

        # Calculate coordinates in absolute coordinate system
        np_position = np.array(position_formatted).transpose()
        position_absolute = self.phone_inv_t_matrix.dot(np_position).transpose()

        # Calculate coordinates in robot coordinate system
        position_robot = self.robot_t_matrix.dot(position_absolute).transpose()
        position_to_send_robot["x"] = float(np.float32(position_robot[0]))
        position_to_send_robot["y"] = float(np.float32(position_robot[1]))
        position_to_send_robot["z"] = float(np.float32(position_robot[2]))

        # Calculate coordinates in hololens coordinate system
        position_hololens = self.hololens_t_matrix.dot(position_absolute).transpose()
        position_to_send_hololens["x"] = float(np.float32(position_hololens[0]))
        position_to_send_hololens["y"] = float(np.float32(position_hololens[2]))
        position_to_send_hololens["z"] = float(np.float32(position_hololens[1]))

        point_to_send_robot["position"] = position_to_send_robot
        point_to_send_hololens["position"] = position_to_send_hololens

        point_to_send_robot["rotation"] = rotation_to_send_robot
        point_to_send_hololens["rotation"] = rotation_to_send_hololens
        print point_to_send_hololens

        return point_to_send_robot, point_to_send_hololens

    def translate_hololens_point(self, point):
        point_to_send_robot = {}
        point_to_send_phone = {}

        rotation_to_send_robot = {}
        rotation_to_send_phone = {}
        rotation_formatted = np.array([point["rotation"]["w"],
                                       point["rotation"]["x"] * -1,
                                       point["rotation"]["z"] * -1,
                                       point["rotation"]["y"] * -1])
        rotation_formatted = pd.to_numeric(rotation_formatted, downcast='float')
        q_rotation = Quaternion(array=np.array(rotation_formatted))

        # calculate rotation in phone coordinate system
        rotation_phone = q_rotation * self.hololens_inv_t_quaternion * self.phone_t_quaternion
        rotation_to_send_phone["x"] = np.round(float(np.float32(-rotation_phone[1])), 13)
        rotation_to_send_phone["y"] = np.round(float(np.float32(-rotation_phone[3])), 13)
        rotation_to_send_phone["z"] = np.round(float(np.float32(-rotation_phone[2])), 13)
        rotation_to_send_phone["w"] = np.round(float(np.float32(rotation_phone[0])), 13)

        print "Point:", point
        print "Hololens inverse:", self.hololens_inv_t_quaternion
        print "hololens", self.hololens_t_quaternion
        print "rotation hololens:", rotation_phone
        print "Phone inverse:", self.phone_inv_t_quaternion
        print "Phone:", self.phone_t_quaternion
        print "formatted rotation", q_rotation
        print json.dumps(rotation_to_send_phone, indent=2)

        # calculate rotation in robot coordinate system
        rotation_robot = q_rotation * self.hololens_inv_t_quaternion * self.robot_t_quaternion
        rotation_to_send_robot["x"] = np.round(float(np.float32(rotation_robot[1])), 13)
        rotation_to_send_robot["y"] = np.round(float(np.float32(rotation_robot[2])), 13)
        rotation_to_send_robot["z"] = np.round(float(np.float32(rotation_robot[3])), 13)
        rotation_to_send_robot["w"] = np.round(float(np.float32(rotation_robot[0])), 13)

        position_to_send_robot = {}
        position_to_send_phone = {}
        position_formatted = np.array([point["position"]["x"], point["position"]["z"], point["position"]["y"], 1])
        position_formatted = pd.to_numeric(position_formatted, downcast='float')

        # Calculate coordinates in absolute coordinate system
        np_position = np.array(position_formatted).transpose()
        position_absolute = self.hololens_inv_t_matrix.dot(np_position).transpose()

        # Calculate coordinates in robot coordinate system
        position_robot = self.robot_t_matrix.dot(position_absolute).transpose()
        position_to_send_robot["x"] = float(np.float32(position_robot[0]))
        position_to_send_robot["y"] = float(np.float32(position_robot[1]))
        position_to_send_robot["z"] = float(np.float32(position_robot[2]))

        # Calculate coordinates in phone coordinate system
        position_phone = self.phone_t_matrix.dot(position_absolute).transpose()
        position_to_send_phone["x"] = float(np.float32(position_phone[0]))
        position_to_send_phone["y"] = float(np.float32(position_phone[2]))
        position_to_send_phone["z"] = float(np.float32(position_phone[1]))

        point_to_send_robot["position"] = position_to_send_robot
        point_to_send_phone["position"] = position_to_send_phone

        point_to_send_robot["rotation"] = rotation_to_send_robot
        point_to_send_phone["rotation"] = rotation_to_send_phone

        print json.dumps(point_to_send_phone, indent=2)

        return point_to_send_robot, point_to_send_phone

    def listen_for_device_input(self, connection):
        while True:
            data = connection.recv(1024)
            data = data.decode("utf-8")
            if data:
                self.translate_point(data)

    def calibrate_device(self, client_socket, address):
        data = client_socket.recv(1024).decode("utf-8")
        print data
        parsed_json = json.loads(data)
        device = parsed_json["device"]

        if device == 'robot':
            self.robot_connection = client_socket
            self.robot_t_matrix, self.robot_inv_t_matrix, self.robot_t_quaternion, self.robot_inv_t_quaternion = device_calibration(parsed_json)
        elif device == 'phone':
            self.phone_connection = client_socket
            self.phone_t_matrix, self.phone_inv_t_matrix, self.phone_t_quaternion, self.phone_inv_t_quaternion = device_calibration(parsed_json)
        elif device == 'hololens':
            self.hololens_connection = client_socket
            self.hololens_t_matrix, self.hololens_inv_t_matrix, self.hololens_t_quaternion, self.hololens_inv_t_quaternion = device_calibration(parsed_json)
        else:
            print "Wrong format:\n", data

        return


def main():
    try:
        print "----- Press 'Enter' to start server setup -----"
        raw_input()
        server = ServerMain()

        print "----- Setup has now been complete -----"
        print "Robot calibration:"
        print server.robot_t_matrix
        print server.robot_inv_t_matrix
        print "Phone calibration:"
        print server.phone_t_matrix
        print server.phone_inv_t_matrix
        print "HoloLens 2 calibration:"
        print server.hololens_t_matrix
        print server.hololens_inv_t_matrix

        print "----- Press 'Enter' to start listening for input from the different devices -----"
        raw_input()
        print "Listening ..."
        thread.start_new_thread(server.listen_for_device_input, (server.robot_connection,))
        thread.start_new_thread(server.listen_for_device_input, (server.phone_connection,))
        thread.start_new_thread(server.listen_for_device_input, (server.hololens_connection,))

        while True:
            pass

    except KeyboardInterrupt:
        return


if __name__ == '__main__':
    main()
