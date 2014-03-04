/*
 * Station.h
 *
 *  Created on: 4 бер. 2014
 *      Author: sashko
 */

#ifndef STATION_H_
#define STATION_H_

#include <vector>
#include <deque>

#include "Vehicle.h"



using namespace std;

class Station {

private:
	deque<Vehicle*> vehicleDeque;
	//vector<FuelingPoint> fuelingPointsPool;


public:
	~Station();

	void addToVehicleDeque(vector<Vehicle*> vehicleVector);

	void processVehicles();





};

#endif /* STATION_H_ */
