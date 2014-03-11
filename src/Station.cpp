

#include "Station.h"
Station::Station(){
	this->clientSocket= ClientSocket("localhost", 30000);
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
	int minlen=this->fuelingPointsPool[0].;
	FuelingPoint f=FuelingPoint();


	while (!(this->vehicleDeque.empty()))
	{

		for (FuelingPoint f : this->fuelingPointsPool){

			}
	}

}

void Station::updateState(){

	distributeAmongFuelingPoints();
	for (FuelingPoint f: this->fuelingPointsPool){
		f.updateState();
	}

}


