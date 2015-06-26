#include "thread.h"
#include "socketserver.h"
#include "commandSocket.h"
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
#include <vector>

class ServerThread: public Thread {
private:
   //List to hold a reference to all threads
   std::vector<Thread*> threads;
   
   //Socket that will be listening
   SocketServer* socket;
   
public:
   //Constructor
   ServerThread() {}
  
   long ThreadMain(void) {
      try
      {
	//socketserver to listen for a connection attempt
        socket = new SocketServer(9099);
         while (1) {
            //Block for a connection attempt
            std::cout<<"Waiting for new connection on server"<<std::endl;
            
            //Connect to drive commands socket
            Socket socket1 = socket->Accept();
            CommandSocket* commandSocket = new CommandSocket(socket1);
            threads.push_back(commandSocket);
            commandSocket->Start();
         }
      }
      catch(...)
      {
         std::cout << "The server has failed or the server port is in use." << std::endl;
      }
      return 200;
   }
   
   ~ServerThread() {
      try {
         //delete socket
         socket->Shutdown();
         //delete all threads
         for (int i(0); i<threads.size(); i++) {
            delete threads[i];
         }
         std::cout<<"The server thread has been deleted, server ended."<<std::endl;
      }
      catch(...) {}
   }
};

//Spawn a server thread to manage connections and then monitor console for exit command
int main(void) {
try {
   ServerThread server;
   server.Start();
   std::string input = "";
   while (input!="quit") {
      getline(std::cin, input);
   }
} catch (std::string s) {
	std::cout<<s<<std::endl;
}
}
