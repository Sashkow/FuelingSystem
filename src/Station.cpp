

#include "Station.h"

Station::Station(): clientSocket(ClientSocket("localhost", 30000)){

	this->fuelingPointsPool=vector<FuelingPoint>();

	this->fuelingPointsPool.push_back(FuelingPoint());
	this->fuelingPointsPool.push_back(FuelingPoint());
	this->fuelingPointsPool.push_back(FuelingPoint());


}

Station::~Station() {

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

void Station::distributeAmongFuelingPoints(){
	/*int minlen=this->fuelingPointsPool[0].getVehicleDeque().size();
	int minPoolIndex=0;
	int poolIndex=0;


	while (!(this->vehicleDeque.empty()))
	{
		for (FuelingPoint f : this->fuelingPointsPool){
				if (f.getVehicleDeque().size()<minlen){
					minlen=f.getVehicleDeque().size();
				}


			}
	}*/

}

void Station::updateState(){

	distributeAmongFuelingPoints();
	for (FuelingPoint f: this->fuelingPointsPool){
		f.updateState();
	}

}


