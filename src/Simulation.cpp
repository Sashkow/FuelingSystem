
/*
 * Simulation.cpp
 *
 *  Created on: 27 лют. 2014
 *      Author: sashko
 */

#include "Simulation.h"

Simulation::Simulation(){
	this->currentTimestep=0;
	this->arrivalRate=this->defaultArrivalRate;
	this->stepLength=this->defaultStepLength;
}

Simulation::~Simulation() {
	// TODO Auto-generated destructor stub
}

vector<Vehicle*> Simulation::generateVehicles(){
	vector<Vehicle*> vehicleVector= vector<Vehicle*>();
	Vehicle* currentVehiclePtr;
	for (int i=0;i<evaluateRandomVehiclesAmount();i++){
		currentVehiclePtr=VehicleFactory::randomVehicle();
		vehicleVector.push_back(currentVehiclePtr);

	}

	return vehicleVector;
}

int Simulation::evaluateRandomVehiclesAmount(){
	int carsAmount=0;
	this->evaluatePoissonArivalProbabilityDistribution();
	float randomValue =((double) rand() / (RAND_MAX)); 							//0 to 1


	while (this->getCummmulativeArrivalProbabilityDistribution()[carsAmount]< randomValue){
		carsAmount+=1;
	}

	return carsAmount;
}


void Simulation::evaluatePoissonArivalProbabilityDistribution(){
	this->arrivalProbabilityDistribution=vector<float>();
	this->cummmulativeArrivalProbabilityDistribution=vector<float>();

	float mew = evaluateArrivalRatePerStepLength();
	int carsAmount=0;

	float arrivalProbability=exp(-mew); // probability that 0 cars arrive
	float summ=exp(-mew);

	this->arrivalProbabilityDistribution.push_back(arrivalProbability);
	this->cummmulativeArrivalProbabilityDistribution.push_back(summ);



	while (arrivalProbability>this->getMinimalSignificantProbability()){
		carsAmount+=1;
		arrivalProbability=(mew*arrivalProbability)/carsAmount;
		summ=summ+arrivalProbability;

		this->arrivalProbabilityDistribution.push_back(arrivalProbability);
		this->cummmulativeArrivalProbabilityDistribution.push_back(summ);
	}

}

float Simulation::evaluateArrivalRatePerStepLength(){
	float stepLengthInHighestUnits=
			static_cast<float>(toMilliseconds(this->stepLength))/
			highestUnitsInMilliseconds(this->stepLength);
	return (this->arrivalRate*stepLengthInHighestUnits)/hoursToHighestUnits(this->stepLength);

}

long Simulation::toMilliseconds(const time_duration& dur){

	    return dur.total_milliseconds();

}


long Simulation::highestUnitsInMilliseconds(time_duration dur){
	if (dur.hours()!=0)
		return toMilliseconds(hours(1));
	if (dur.minutes()!=0)
			return toMilliseconds(minutes(1));
	if (dur.seconds()!=0)
			return toMilliseconds(seconds(1));
	return 1;
}

float Simulation::hoursToHighestUnits(time_duration dur){
		if (dur.hours()!=0)
			return 1;
		if (dur.minutes()!=0)
				return 60;
		if (dur.seconds()!=0)
				return 60*60;
		return NULL;

}




