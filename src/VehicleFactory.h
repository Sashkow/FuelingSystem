#ifndef VEHICLE_FACTORY_H_
#define VEHICLE_FACTORY_H_
#include <iostream>
#include <stdlib.h>

#include "Vehicle.h"

#include "Vehicles/PetrolCar.h"
#include "Vehicles/PetrolTruck.h"
#include "Vehicles/ElectricCar.h"

using namespace std;


class VehicleFactory{
private:



public:




	VehicleFactory(){
	}

    static Vehicle* newVehicle(const std::string &className)
    {
		if (className=="PetrolCar")
			return new PetrolCar();
		if (className=="ElectricCar")
			return new ElectricCar();
    }

    static Vehicle* randomVehicle(){
    	int randomVehicleTypeNumber= rand()%Vehicle::vehicleMap.size();
    	Vehicle* v=newVehicle(Vehicle::vehicleMap[randomVehicleTypeNumber]);
    	v->setRandomProperties();
    	return v;

    }


};




#endif //VehicleFactory
