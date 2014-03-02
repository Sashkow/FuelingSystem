/*
 * PetrolTruck.h
 *
 *  Created on: 23 лют. 2014
 *      Author: sashko
 */

#ifndef PETROLTRUCK_H_
#define PETROLTRUCK_H_
#include "../Vehicle.h"

class PetrolTruck: Vehicle {
	~PetrolTruck(){}
	void fill();
	ptime evaluateFuelingTime();
};




#endif /* PETROLTRUCK_H_ */
