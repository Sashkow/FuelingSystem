/*
 * PetrolCar.h
 *
 *  Created on: 23 лют. 2014
 *      Author: sashko
 */


#ifndef PETROLCAR_H_
#define PETROLCAR_H_

#include "../Vehicle.h"


#include <time.h>

class PetrolCar: public Vehicle{
public:
	PetrolCar():Vehicle(){
		this->requiredFuelType=FuelType::PETROL;
	}
	time_duration evaluateFuelingTime();
	void fill();
	virtual ~PetrolCar(){}


};



#endif /* PETROLCAR_H_ */
