/*
 * Fuelable.h
 *
 *  Created on: 23 лют. 2014
 *      Author: sashko
 */

#ifndef FUELABLE_H_
#define FUELABLE_H_

#include "boost/date_time/gregorian/gregorian.hpp"
#include "boost/date_time/posix_time/posix_time.hpp"

using namespace boost::posix_time;
using namespace boost::gregorian;



#include "FuelType.h"

class Vehicle{
private:

	float tankCapacity;
	float fuelInTank;
	//FuelType requiredFuelType;
	//static std::map < FuelType, std::string> fuelUnitsMap;
	float amountToTake;



	//date arrivalDate; 					//not here

	ptime waitingForFuelTime;
	ptime waitingForUpdatedStatisticsTime;

	float cash;

public:


	virtual ptime evaluateFuelingTime() = 0;
	virtual void fill()=0;
	virtual ~Vehicle(){}


};




#endif /* FUELABLE_H_ */
