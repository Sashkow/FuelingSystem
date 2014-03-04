/*
 * Station.cpp
 *
 *  Created on: 4 бер. 2014
 *      Author: sashko
 */

#include "Station.h"

Station::~Station() {
	// TODO Auto-generated destructor stub
}

void Station::addToVehicleDeque(vector<Vehicle*> vehicleVector){
	for(Vehicle* vPtr : vehicleVector)
		this->vehicleDeque.push_back(vPtr);
}

//Demo: vehicles leave as they come to the station
void Station::processVehicles(){
	Vehicle* currentVehicle;
	while (this->vehicleDeque.size()!=0){
		currentVehicle=this->vehicleDeque.front();
		this->vehicleDeque.pop_front();
		currentVehicle->operator<<(cout);
		cout<< " (just left)"<<endl;
		delete currentVehicle;

	}
}


