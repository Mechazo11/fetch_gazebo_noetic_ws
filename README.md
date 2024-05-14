# fetch_gazebo_noetic_ws

This repository contains a ROS Noetic workspace that enables simulation of a Fetch robot based on the Gazebo simulations from [fetch_gazebo](https://github.com/ZebraDevs/fetch_gazebo).

It is a work in progress, system may not build at this time.

This project was part of CSC 7135 Software Engineering project taught by Professor Umar Farooq at Louisiana State University.

## Prequisits

The following packages must be installed prior to installing

* Ubuntu 20.04
* ROS Noetic

### Install dependencies before building catkin

* Intall geometry2 module ```sudo apt install ros-noetic-geometry2*```

* Intall navigation module ```sudo apt install ros-noetic-navigation```

* Install moveit module ```sudo apt install ros-noetic-moveit```

* Install simple_grasping module ```sudo apt install ros-noetic-simple-grasping```

* Install teleop-twist-keyboard ```sudo apt-get install ros-noetic-teleop-twist-keyboard```

* Install rgbd_launch ```sudo apt-get install ros-noetic-rgbd_launch```

* Ensure ```numpy``` is installed in the enviornment (pipenv or conda)

#### Testing Fetch robot

* Launch the playground for pick-and-place simulation
```roslaunch fetch_gazebo pickplace_playground.launch```

* Launch the pick and place demo
```roslaunch fetch_gazebo_demo pick_place_demo.launch```

* Launch the basic simualtion
```roslaunch fetch_gazebo simulation.launch```

## Major changes from ```fectch_gazebo``` package

* FOO

## TODOs

* [] Do a build test, launch test and record all dependencies
* [] Modify the README.md files in ```fetch_gazebo``` and ```fetch_gazebo_demo``` sub pacakges under the ```fetch_gazebo``` package
* [] Rebuild / Refactor update the find and pick and place example for the fetch gazebo with documentation
