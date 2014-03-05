/*
 * ElectricCar.h
 *
 *  Created on: 23 лют. 2014
 *      Author: sashko
 */

#ifndef ELECTRICCAR_H_
#define ELECTRICCAR_H_

#include "../Vehicle.h"




class ElectricCar :public Vehicle{
public:

	ElectricCar():Vehicle(){
		this->requiredFuelType=FuelType::ELECTRICITY;
	}
	virtual ~ElectricCar();
	void fill();
	time_duration evaluateFuelingTime();




};

#endif /* ELECTRICCAR_H_ */
