/***
 * @file fetchsensor_node.cpp
 * @brief TODO
 * @author Azmyin M. Kamal
 * @date 05/03/2024
*/

// Includes
#include "robot_sensor.hpp"

/**
 * Main entry point to this node
*/
int main(int argc, char **argv){

    // Set up the ROS node.
    ros::init(argc, argv, "fetch_sensor"); // Initialize node with a name
    FetchSensorBad sensor; // Erroneous class
    ros::Rate rate(20); // 20 Hz update
    // Blocking
    while(ros::ok())
    {
        sensor.publishHeadImuMessage();  
        ros::spinOnce(); // Process callbacks
        rate.sleep();        
    }
} // end main()