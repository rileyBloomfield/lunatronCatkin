#include <ros/ros.h>
#include <std_msgs/String.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Twist.h>
#include <iostream>

void poseReceived(const geometry_msgs::PoseStamped::ConstPtr& msg);

float poseX1, poseY1, poseZ1;
float deltaX1, deltaY1, deltaZ1;

bool hasDelta = true;

int main(int argc, char** argv) {
    ros::init(argc, argv, "ground_velocity");
    ros::NodeHandle nh;
    ros::Rate rate(1);

    //Subscribers
    ros::Subscriber sub = nh.subscribe("mono_odometer/pose", 1, poseReceived);

    //Publishers
    ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("VO_Velocity",1);

    while(nh.ok()) {
	if(hasDelta) {
	    geometry_msgs::Twist twist;
	    twist.linear.x = deltaX1;
	    twist.linear.y = deltaY1; 
	    twist.linear.z = deltaZ1;
	    pub.publish(twist);
	}
	ros::spinOnce();
	rate.sleep();
    }
}

void poseReceived(const geometry_msgs::PoseStamped::ConstPtr& msg) {
    if(hasDelta) {
	poseX1 = msg->pose.position.x;
	poseY1 = msg->pose.position.y;
	poseZ1 = msg->pose.position.z;
	hasDelta = false;
    }
    else {
	deltaX1 = msg->pose.position.x - poseX1;
	    if (deltaX1<0.00001) deltaX1 = 0.0;
	deltaY1 = msg->pose.position.y - poseY1;
	    if (deltaY1<0.00001) deltaY1 = 0.0;
	deltaZ1 = msg->pose.position.z - poseZ1;
	    if (deltaZ1<0.00001) deltaZ1 = 0.0;
	hasDelta = true;
    }
}
