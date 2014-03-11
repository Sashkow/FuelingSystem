
#ifndef FUELABLE_H_
#define FUELABLE_H_

#include <stdlib.h>
#include "boost/date_time/gregorian/gregorian.hpp"
#include "boost/date_time/posix_time/posix_time.hpp"

using namespace boost::posix_time;
using namespace boost::gregorian;

using namespace std;

#include "FuelType.h"

#include <iostream>
#include <string>

class Vehicle{
protected:
	const float minTankCapacity=1;
	const float maxTankCapacity=100;

	const float minFuelInTankPercentage=0;
	const float maxFuelInTankPercentage=100;

	const float minWaitingTimeInMinutes=5;
	const float maxWaitingTimeInMinutes=10;

	float tankCapacity;
	float fuelInTankPercentage;

	FuelType requiredFuelType;
	//static std::map < FuelType, std::string> fuelUnitsMap;
	float amountToTake;

	date arrivalDate;

	time_duration waitingForFuelTime;
	//time_duration waitingForUpdatedStatisticsTime;

	//float cash;

public:

	static map<int,string> vehicleMap;

    Vehicle(){
		ptime now = second_clock::local_time();
		arrivalDate=now.date();

	}

	virtual time_duration evaluateFuelingTime() = 0;
	virtual void fill()=0;

	float getAmountToTake() const {
		return amountToTake;
	}

	void setAmountToTake(float amountToTake) {
		this->amountToTake = amountToTake;
	}

	date getArrivalDate() const {
		return arrivalDate;
	}

	void setArrivalDate(date arrivalDate) {
		this->arrivalDate = arrivalDate;
	}

	float getFuelInTankPercentage() const {
		return fuelInTankPercentage;
	}

	void setFuelInTankPercentage(float fuelInTankPercentage) {
		this->fuelInTankPercentage = fuelInTankPercentage;
	}

	const float getMaxFuelInTankPercentage() const {
		return maxFuelInTankPercentage;
	}

	const float getMaxTankCapacity() const {
		return maxTankCapacity;
	}

	const float getMaxWaitingTimeInMinutes() const {
		return maxWaitingTimeInMinutes;
	}

	const float getMinFuelInTankPercentage() const {
		return minFuelInTankPercentage;
	}

	const float getMinTankCapacity() const {
		return minTankCapacity;
	}

	const float getMinWaitingTimeInMinutes() const {
		return minWaitingTimeInMinutes;
	}

	FuelType getRequiredFuelType() const {
		return requiredFuelType;
	}

	void setRequiredFuelType(FuelType requiredFuelType) {
		this->requiredFuelType = requiredFuelType;
	}

	float getTankCapacity() const {
		return tankCapacity;
	}

	void setTankCapacity(float tankCapacity) {
		this->tankCapacity = tankCapacity;
	}

	time_duration getWaitingForFuelTime() const {
		return waitingForFuelTime;
	}

	void setWaitingForFuelTime(time_duration waitingForFuelTime) {
		this->waitingForFuelTime = waitingForFuelTime;
	}

	void setRandomProperties(){
		tankCapacity=random()%static_cast<int>((maxTankCapacity-minTankCapacity)+minTankCapacity);
		fuelInTankPercentage=random()%static_cast<int>((maxFuelInTankPercentage-minFuelInTankPercentage)+minFuelInTankPercentage);
		requiredFuelType=static_cast<FuelType>(random()%(static_cast<int>(FuelType::fuelTypesAmount)));
		amountToTake=random()%static_cast<int>(tankCapacity);
		float waitingTimeInMinutes=random()%static_cast<int>((maxWaitingTimeInMinutes-minWaitingTimeInMinutes)+minWaitingTimeInMinutes);
		waitingForFuelTime=minutes(static_cast<int>(waitingTimeInMinutes));







	}
	virtual ~Vehicle(){}


	virtual ostream& operator<<(ostream& os);


};






#endif /* FUELABLE_H_ */
