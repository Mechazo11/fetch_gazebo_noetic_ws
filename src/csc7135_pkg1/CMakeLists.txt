cmake_minimum_required(VERSION 3.1)
project(csc7135_pkg1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

## Find catkin macros and libraries
find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  sensor_msgs
)

## System dependencies are found with CMake's conventions
# find_package(Boost REQUIRED COMPONENTS system)


###################################
## catkin specific configuration ##
###################################
catkin_package (
  # INCLUDE_DIRS include
  # LIBRARIES ${PROJECT_NAME}
  CATKIN_DEPENDS roscpp std_msgs sensor_msgs
  # DEPENDS system_lib
)

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(
  ${PROJECT_SOURCE_DIR}
  ${PROJECT_SOURCE_DIR}/include  
  ${catkin_INCLUDE_DIRS}
)

# This project does not build a library, all code contained in nodes
## Declare a C++ library
# add_library(${PROJECT_NAME}
#   src/${PROJECT_NAME}/csc7135_pkg1.cpp
# )

## Add cmake target dependencies of the library
## as an example, code may need to be generated before libraries
## either from message generation or dynamic reconfigure
# add_dependencies(${PROJECT_NAME} ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})

##############################################
## Declare C++ libraries and link libraries ##
##############################################

# FetchRobot node
add_executable(fetchcontroller_node 
              src/fetchcontroller_node.cpp
              src/robot_controller.cpp
)
target_link_libraries(fetchcontroller_node
  ${catkin_LIBRARIES}
)

# FetchSensor node [good]
add_executable(fetchsensor_node 
                src/fetchsensor_node.cpp
                src/robot_sensor.cpp
)
target_link_libraries(fetchsensor_node
  ${catkin_LIBRARIES}
)

# FetchSensor node [bad]
add_executable(fetchsensorbad_node 
                src/fetchsensorbad_node.cpp
                src/robot_sensor.cpp
)
target_link_libraries(fetchsensorbad_node
  ${catkin_LIBRARIES}
)

# Node that simulates visual and arm joint feedback
# add_executable(sensor_node src/sensor_node.cpp)
# target_link_libraries(sensor_node
#   ${catkin_LIBRARIES}
# )

#############
## Install ##
#############

# all install targets should use catkin DESTINATION variables
# See http://ros.org/doc/api/catkin/html/adv_user_guide/variables.html


install(
  TARGETS fetchcontroller_node fetchsensor_node fetchsensorbad_node
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_GLOBAL_BIN_DESTINATION}
)

# Mark cpp header files for installation
install(DIRECTORY include/${PROJECT_NAME}/
  DESTINATION ${CATKIN_PACKAGE_INCLUDE_DESTINATION}
  FILES_MATCHING 
  PATTERN "*.h"
  PATTERN "*.hpp" 
)

# Install launch files
install(
  DIRECTORY launch/
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}/launch
)

# TODO this will be needed for ROSDiscover
## Mark other files for installation (e.g. launch and bag files, etc.)
# install(FILES
#   # myfile1
#   # myfile2
#   DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
# )
