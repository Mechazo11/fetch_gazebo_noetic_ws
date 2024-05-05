/**
 * @file robot_controller.hpp
 * @author Azmyin M. Kamal
 * @brief Contains ```FetchRobotController``` class definitions
 * @version 0.1
 * @date 2024-05-02
 * 
 */
#ifndef ROBOT_CONTROLLER_HPP
#define ROBOT_CONTROLLER_HPP

//* C/C++

//* ROS
#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sensor_msgs/JointState.h"
#include "sensor_msgs/Image.h"
#include <sensor_msgs/Imu.h>
#define pass (void)0

class FetchRobotController
{
    public:
        // Methods
        FetchRobotController(); // Constructor
        ~FetchRobotController();// Destructor
        void headImuCallback(const sensor_msgs::Imu::ConstPtr& msg);
        // Variables
        ros::NodeHandle nh;
        // ros::Rate r;
        ros::Subscriber sub_head_imu_;
};

#endif