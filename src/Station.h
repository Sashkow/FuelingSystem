
#ifndef STATION_H_
#define STATION_H_

#include <vector>
#include <deque>

#include "FuelingPoint.h"
#include "Vehicle.h"

#include "ClientServerSockets/ClientSocket.h"

class ClientSocket;



using namespace std;

class Station {

private:
	ClientSocket clientSocket;					//initialized in constructor
    string reply;
	string message;

	deque<Vehicle*> vehicleDeque;  				//starts empty
	vector<FuelingPoint> fuelingPointsPool; 	//initialized in constructor


public:
	Station();
	~Station();



	void addToVehicleDeque(vector<Vehicle*> vehicleVector);

	void processVehicles();

	void distributeAmongFuelingPoints();

	void updateState();





};

#endif /* STATION_H_ */
