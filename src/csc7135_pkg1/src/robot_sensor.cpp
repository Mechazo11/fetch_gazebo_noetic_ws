/**
 * @file robot_sensor.hpp
 * @brief Implementation for ```FetchSensor``` class
 * @author TODO
 * @date 05/03/24
*/

// Includes
#include "robot_sensor.hpp"

/**
 * @brief Constructor
*/
FetchSensor::FetchSensor(){
    /**
     * Here other classe would be called and sensors initialized
    */
   std::cout<<"Sensors initalized"<<std::endl;
   // Setup publisher
   imu_pub = nh.advertise<sensor_msgs::Imu>("/fetch/head_imu_data", 10);
}

/**
 * @brief Simulate sending IMU data
*/
void FetchSensor::publishHeadImuMessage(){
    sensor_msgs::Imu imu_msg;
    imu_msg.header.stamp = ros::Time::now();  // populate header stamp
    // Other values would have been populated here
    imu_pub.publish(imu_msg);
}

/**
 * @brief Destructor
*/
FetchSensor::~FetchSensor(){
    /**
     * Other sensor shutdown code goes here
    */
    ros::shutdown(); // Ensures ROS shuts down correctly
}

// ----------------------------------------------------------------

/**
 * @brief Constructor
*/
FetchSensorBad::FetchSensorBad(){
    /**
     * Here other classe would be called and sensors initialized
    */
   std::cout<<"Sensors initalized"<<std::endl;
   // Setup publisher
   imu_pub = nh.advertise<sensor_msgs::Imu>("/fetch/head_imu_data", 10);
}

/**
 * @brief Simulate sending IMU data
*/
void FetchSensorBad::publishHeadImuMessage(){
    //sensor_msgs::Imu imu_msg;
    sensor_msgs::Image imu_msg; // Wrong type selected
    imu_msg.header.stamp = ros::Time::now();  // populate header stamp
    // Other values would have been populated here
    imu_pub.publish(imu_msg);
}

/**
 * @brief Destructor
*/
FetchSensorBad::~FetchSensorBad(){
    /**
     * Other sensor shutdown code goes here
    */
    ros::shutdown(); // Ensures ROS shuts down correctly
}