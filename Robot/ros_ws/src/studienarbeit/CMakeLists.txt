cmake_minimum_required(VERSION 3.0.2)
project(studienarbeit)

find_package(catkin 
  REQUIRED
  COMPONENTS
  rospy
  actionlib
  sensor_msgs
  control_msgs
  trajectory_msgs
  cv_bridge
  dynamic_reconfigure
  intera_core_msgs
  intera_motion_msgs
  intera_interface
)

catkin_package(
  CATKIN_DEPENDS
  rospy
  actionlib
  sensor_msgs
  control_msgs
  trajectory_msgs
  cv_bridge
  dynamic_reconfigure
  intera_core_msgs
  intera_motion_msgs
  intera_interface
)


include_directories(
  ${catkin_INCLUDE_DIRS}
)

install(
  PROGRAMS scripts/test.py
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)


