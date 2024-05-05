/**
 * @file robot_sensor.hpp
 * @brief Class definition for FetchSensor class
 * @author TODO
 * @date 05/03/24
*/

#ifndef ROBOT_SENSOR_HPP
#define ROBOT_SENSOR_HPP

// Includes
//* C/C++

//* ROS
#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sensor_msgs/JointState.h"
#include "sensor_msgs/Image.h"
#include "sensor_msgs/Imu.h"
#define pass (void)0

/**
 * @brief This class publishes correct data type
*/
class FetchSensor
{
    public:
        // Methods
        FetchSensor(); // Constructor
        ~FetchSensor();// Destructor
        void publishHeadImuMessage(); // Function that simulates Imu messages being sent out
        
        // Variables
        ros::NodeHandle nh; 
        ros::Publisher imu_pub;
};

/**
 * @brief This class publishes wrong data type thus creating an architectural bug
*/
class FetchSensorBad
{
    public:
        // Methods
        FetchSensorBad(); // Constructor
        ~FetchSensorBad();// Destructor
        void publishHeadImuMessage(); // Function that simulates Imu messages being sent out
        
        // Variables
        ros::NodeHandle nh; 
        ros::Publisher imu_pub;
};

#endif