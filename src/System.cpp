/*
 * System.cpp
 *
 *  Created on: 11 бер. 2014
 *      Author: sashko
 */

#include "System.h"

System::~System() {
	// TODO Auto-generated destructor stub
}

System::System() {
	this->server =ServerSocket( 30000 );
	this->station=Station();

}

void System::run(){
	cout << "Running....\n";

	  try
	    {
	      // Create the socket
	      ServerSocket server ( 30000 );

	      while ( true )
		{

		  ServerSocket new_sock;
		  server.accept ( new_sock );

		  try
		    {
		      while ( true )
			{
			  std::string data;
			  new_sock >> data;
			  cout << "Recieved: " << data << "  Echoing Message" << endl;
			  new_sock << data;
			}
		    }
		  catch ( SocketException& se ) {
	        cout << "Exception was caught:" << se.description() << endl;
	        cout << "Was the client socket closed?" << endl;
		  }

		}
	    }
	  catch ( SocketException& e )
	    {
	      cout << "Exception was caught:" << e.description() << "\nExiting.\n";
	    }

}

