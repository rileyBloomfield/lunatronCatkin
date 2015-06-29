#include "thread.h"
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
#include "ros/ros.h"

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
      std::cout<<"Connection accepted"<<std::endl;
      ByteArray msg;

      std::string str = "";
      std::string delimit = ":";
      std::string command = "";

      while (1) {
	socket.Read(msg);
	std::string str = msg.ToString();
	std::cout<<str;
	command = str.substr(0, str.find(delimit));

	str.erase(0, str.find(delimit) + delimit.length());
	if (command == "driveCommand") {
	   std::cout<<str;
	}
      }
   isDone = true;
   }  
};
