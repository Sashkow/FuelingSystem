#include "ClientSocket.h"
#include "SocketException.h"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

using namespace std;

int main ( int argc, char * argv[] ) {
	ClientSocket client_socket ( "localhost", 30000 );
	      string reply;
	      string message;
   while(true){
	   try {


	         try {
			  cout<<"enter message"<<endl;
			  cin>>message;
	   	      client_socket << message;
	   	      client_socket >> reply;
	   	   }
	         catch ( SocketException& se ) {
	            cout << "Exception was caught:" << se.description() << "\n";
	         }

	         cout << "We received this response from the server:\n\""
	              << reply << "\"" << endl;

	              //cout << " Enter \"Exit\"to stop client (no quotes)......" ;
	              //std::cin >> reply;

	      }
	      catch ( SocketException& e ) {
	         cout << "Exception was caught:" << e.description() << endl;
	      }


   }

   return 0;
}


