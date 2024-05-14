## Notes related to publishing noetic version of Fetch Robot

For the CSC7135 project, we ended up not requiring the complex Fetch robot ROS system since ROSDiscover was never able to recover architectural bug as per ```Table II``` in pg 117 of the paper.

Hence, after the semester ends, I will publish this work as a open-source repository

### TODOs

- [ ] ```fetch_gazebo``` needs to be broken down into simpler packages so that they can all be tracked by one repository tracking the ```fetch_gazeobo_noetic_ws``` repository

## Changes from ROS Melodic build
* Changed all relevevant .py script's top-level shebang to ```#!/usr/bin/env python3```


### Solve the issue with ```PYTHONPATH``` and ```setuptools ```

Follow these steps
* Open a File exlorer, go to ```Home```
* Hit ```Ctrl+H``` to allow viewing hidden files
* Open ```.bashrc```
* Scroll down to the very bottom and copy these lines
```
export PYTHONPATH="/usr/lib/python3/dist-packages:$PYTHONPATH"
export SETUPTOOLS_USE_DISTUTILS=stdlib
```

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