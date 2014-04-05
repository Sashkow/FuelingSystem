/*
 * System.h
 *
 *  Created on: 11 бер. 2014
 *      Author: sashko
 */

#ifndef SYSTEM_H_
#define SYSTEM_H_
#include "ClientServerSockets/ServerSocket.h"
#include "ClientServerSockets/SocketException.h"
#include "Station.h"
#include <string>
#include <iostream>

class System {
private:
	ServerSocket server;
	Station station; 		//just one

public:
	~System();
	System();
	void run();


	ServerSocket getServer() const {
		return server;
	}


	Station getStation() const {
		return station;
	}

};
#endif /* SYSTEM_H_ */
