/**
 * @file robot_controller.cpp
 * @brief Contains ```FetchRobotController``` class implementation
 * @author Azmyin M. Kamal
 * @date 2024-05-02
 * @version 0.1
*/

//* Includes
#include "robot_controller.hpp"

/**
 * @brief Constructor
*/
FetchRobotController::FetchRobotController(){
    /**
     * Other relevant classes and arm controllers would be setup here
    */
   
   /**
    * If the subscriber is inside the class Listener, 
    * you can replace the last argument with the keyword this, 
    * which means that the subscriber will refer to the class it is part of. 
   */
    sub_head_imu_ = nh.subscribe("/fetch/head_imu_data", 10, 
                    &FetchRobotController::headImuCallback, this);
}
/**
 * @brief Simualtes receipt of orientation of robot's head
 * @attention This is the correct signature
*/
void FetchRobotController::headImuCallback(const sensor_msgs::Imu::ConstPtr& msg) {
    // Access and print the timestamp
    ROS_INFO("Received Imu message with timestamp: %f", msg->header.stamp.toSec());
    // Additional processing if needed
}

/**
 * @brief Destructor
*/
FetchRobotController::~FetchRobotController(){
    /**
     * Other classes, controller shutdown code goes here
    */
    ros::shutdown(); // Ensures ROS shuts down correctly
}