#include "thread.h"
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
#include "ros/ros.h"
#include "std_msgs/String.h"
#include <iostream>

using namespace std;

class CommandSocket: public Thread{
private:
   bool isDone;
   Socket socket;

public:
   CommandSocket(Socket const &socket): socket(socket), isDone(false) {}
   ~CommandSocket() {std::cout<<"Command socket terminated"<<std::endl;}
   bool isFinished() { return isDone; }
   
   //Main thread execution
   long ThreadMain(void) {
      //ROS
      int argc;
      char **argv;
      ros::init(argc, argv, "command_socket");
      ros::NodeHandle nh;
      //Publishers
      ros::Publisher driveCommands = nh.advertise<std_msgs::String>("driveCommands",1);
      ros::Publisher dutyCommands = nh.advertise<std_msgs::String>("dutyCommands",1);

      std::cout<<"Connection accepted"<<std::endl;
      ByteArray msg;

      string str = "";
      string delimit = ":";

      while (socket.Read(msg)) {
	string str = msg.ToString();
	string token = str.substr(0, str.find(delimit));
	str.erase(0, str.find(delimit) + delimit.length());
	if(token == "driveCommand") {
	    std_msgs::String command;
	    command.data = str;
	    driveCommands.publish(command);	
	}
	else if (token == "dutyCommand") {
	    std_msgs::String command;
	    command.data = str;
	    dutyCommands.publish(command);
	}
      }
   isDone = true;
   }  
};
