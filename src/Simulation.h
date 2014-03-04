/*
 * Simulation.h
 *
 *  Created on: 27 лют. 2014
 *      Author: sashko
 */

#ifndef SIMULATION_H_
#define SIMULATION_H_

#include "boost/date_time/posix_time/posix_time.hpp"
#include <vector>

#include "VehicleFactory.h"

using namespace std;
using namespace boost::posix_time;


class Simulation {
private:
	float arrivalRate;         	//vehicles per hour
	time_duration stepLength;
	const float defaultArrivalRate=120;
	const time_duration defaultStepLength=minutes(1);
	const float minimalSignificantProbability=0.001;

	vector<float> arrivalProbabilityDistribution;
	vector<float> cummmulativeArrivalProbabilityDistribution;

	int currentTimestep;

	long highestUnitsInMilliseconds(time_duration dur);
	long toMilliseconds(const time_duration& dur);
	float hoursToHighestUnits(time_duration dur);

public:


	Simulation();

	void evaluatePoissonArivalProbabilityDistribution();

	int evaluateRandomVehiclesAmount();

	float evaluateArrivalRatePerStepLength();




	vector<Vehicle> generateVehicles();
	virtual ~Simulation();

	const float getMinimalSignificantProbability() const {
		return minimalSignificantProbability;
	}

	vector<float> getArrivalProbabilityDistribution() const {
		return arrivalProbabilityDistribution;
	}

	void setArrivalProbabilityDistribution(
			vector<float> arrivalProbabilityDistribution) {
		this->arrivalProbabilityDistribution = arrivalProbabilityDistribution;
	}

	vector<float> getCummmulativeArrivalProbabilityDistribution() const {
		return cummmulativeArrivalProbabilityDistribution;
	}

	void setCummmulativeArrivalProbabilityDistribution(
			vector<float> cummmulativeArrivalProbabilityDistribution) {
		this->cummmulativeArrivalProbabilityDistribution =
				cummmulativeArrivalProbabilityDistribution;
	}void setCurrentTimestep(int currentTimestep) {
		this->currentTimestep = currentTimestep;
	}

	int getCurrentTimestep() const {
		return currentTimestep;
	}

	float getArrivalRate() const {
		return arrivalRate;
	}

	void setArrivalRate(float arrivalRate) {
		this->arrivalRate = arrivalRate;
	}

	time_duration getStepLength() const {
		return stepLength;
	}

	void setStepLength(time_duration stepLength) {
		this->stepLength = stepLength;
	}
};

#endif /* SIMULATION_H_ */
