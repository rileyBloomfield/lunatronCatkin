#include <ros/ros.h>
#include <std_msgs/String.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Twist.h>
#include <iostream>

void poseReceived(const geometry_msgs::PoseStamped::ConstPtr& msg);

float poseX1, poseY1, poseZ1;
unsigned int t1, deltaT;
float deltaX1, deltaY1, deltaZ1;

bool firstPass = true;
bool velSent = false;

int main(int argc, char** argv) {
    ros::init(argc, argv, "ground_velocity");
    ros::NodeHandle nh;
    ros::Rate rate(10);

    //Subscribers
    ros::Subscriber sub = nh.subscribe("mono_odometer/pose", 1, poseReceived);

    //Publishers
    ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("VO_Velocity",1);

    while(nh.ok()) {
	if (!velSent) {
	    geometry_msgs::Twist twist;
	    twist.linear.x = deltaX1/deltaT;
	    twist.linear.y = deltaY1/deltaT; 
	    twist.linear.z = deltaZ1/deltaT;
	    pub.publish(twist);
	    velSent = true;
	}
	ros::spinOnce();
	rate.sleep();
    }
}

void poseReceived(const geometry_msgs::PoseStamped::ConstPtr& msg) {
//If last recorded velocity has been sent, create new one
if(velSent) {
    //First distance measurement received
    if(firstPass) {
	t1 = msg->header.stamp.sec;
	poseX1 = msg->pose.position.x;
	poseY1 = msg->pose.position.y;
	poseZ1 = msg->pose.position.z;
	firstPass = false;
    }
    //Second distance measurement received
    else {
	deltaT = msg->header.stamp.sec;
	deltaX1 = msg->pose.position.x - poseX1;
	deltaY1 = msg->pose.position.y - poseY1;
	deltaZ1 = msg->pose.position.z - poseZ1;
	firstPass = true;
	velSent = false;
    }
}
}
