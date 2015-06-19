/* Riley Bloomfield, 2015
* Very simple node to take an integer input and throw into driveCommands to move rover forward, backward,
* left and right.
*/

#include "ros/ros.h"
#include "std_msgs/String.h"
#include "stdlib.h"

int main(int argc, char **argv) {
	//Init ros
	ros::init(argc, argv, "keyboard_teleop");
	ros::NodeHandle nh;

	//Publishers
	ros::Publisher driveCommands = nh.advertise<std_msgs::String>("driveCommands",1);

	//Messages
	std_msgs::String command;

	//Main Loop 
	while(ros::ok()) {
		int c = getchar();
		command.data = c;
		driveCommands.publish(command);

	}
}

