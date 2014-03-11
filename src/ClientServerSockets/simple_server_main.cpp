/*
 * Thursday, 7 November 2012
 * Corrected signature of main
 */
#include "ServerSocket.h"
#include "SocketException.h"
#include <string>
#include <iostream>
using std::cout;
using std::endl;


int main ( int argc, char * argv[] )
{
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

  return 0;
}


