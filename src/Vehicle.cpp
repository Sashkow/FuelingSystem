/*
 * Vehicle.cpp
 *
 *  Created on: 4 бер. 2014
 *      Author: sashko
 */
#include "Vehicle.h"

map<int,string> Vehicle::vehicleMap{
		    {0,"PetrolCar" },
		    {1,"ElectricCar" }
		};


ostream& Vehicle::operator<<(ostream& os){
	 os<<"Vehicle "<<Vehicle::vehicleMap[this->getRequiredFuelType()]<<" arrived at: "<<(this->getArrivalDate());

	 return os;
}

