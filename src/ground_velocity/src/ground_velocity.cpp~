#include <ros/ros.h>
#include <std_msgs/String.h>
#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/Twist.h>
#include <iostream>

void poseReceived(const geometry_msgs::PoseStamped::ConstPtr& msg);

float poseX1, poseX2, poseY1, poseY2, poseZ1, poseZ2;
bool hasDelta = true;

int main(int argc, char** argv) {
    ros::init(argc, argv, "ground_velocity");
    ros::NodeHandle nh;
    ros::Rate rate(5);

    //Subscribers
    ros::Subscriber sub = nh.subscribe("mono_odometer/pose", 1, poseReceived);

    //Publishers
    ros::Publisher pub = nh.advertise<geometry_msgs::Twist>("VO_Velocity",1);

    while(nh.ok()) {
	if(hasDelta) {
	    geometry_msgs::Twist twist;
	    twist.linear.x = poseX2;
	    twist.linear.y = poseY2; 
	    twist.linear.z = poseZ2;
	    pub.publish(twist);
	}
	ros::spinOnce();
	rate.sleep();
    }

}

void poseReceived(const geometry_msgs::PoseStamped::ConstPtr& msg) {
    //std::cout<<msg->pose.position.x<<std::endl;
    if(hasDelta) {
	poseX1 = msg->pose.position.x;
	poseY1 = msg->pose.position.y;
	poseZ1 = msg->pose.position.z;
	hasDelta = false;
    }
    else {
	poseX2 = msg->pose.position.x - poseX1;
	poseY2 = msg->pose.position.y - poseY1;
	poseZ2 = msg->pose.position.z - poseZ1;
	hasDelta = true;
    }
}
