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


	virtual ~ElectricCar();
	void fill();
	ptime evaluateFuelingTime();




};

#endif /* ELECTRICCAR_H_ */
