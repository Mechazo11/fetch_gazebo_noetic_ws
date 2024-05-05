/**
 * @file fetchcontroller_node.cpp
 * @brief TODO
 * @author Azmyin M. Kamal
 * @date 2024-05-02
*/

// Includes
#include "robot_controller.hpp"

/**
 * Main entry point to this node
*/
int main(int argc, char **argv){

    // Set up the ROS node.
    ros::init(argc, argv, "fetch_robot"); // Initialize node with a name
    FetchRobotController fetch_controller;
    std::cout << "fetch controller ready" << std::endl;
    ros::Rate rate(20); // 20 Hz update
    
    // Blocking
    while(ros::ok())
    {  
        ros::spinOnce(); // Process callbacks
        rate.sleep();        
    }
} // end main()