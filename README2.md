# Task 
obtain motion capture pose data over wifi in a ros 2 docker container.

# To Know
- The original `ros-XXX-mocap-optitrack` package doesn't work on ROS 2, so we will use this 3rd party package instead.
- I modified the original repo to work off the bat with the Optitrack setup on Level 18 Drone Lab, the only thing you need to change is the object name.
- for the container to see your own PC's network, you need `--net host` flag when creating your container.



# Useful data to obtain from the server PC
![Alt text](doc/optitrack_go2.png?raw=true "Title")
![Alt text](doc/optitrack_setting.png?raw=true "Title")

# Thanks
Special thanks to @ivan-sim-wan-leong for setting this up for all of us.