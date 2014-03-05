/*
 * ElectricCar.cpp
 *
 *  Created on: 23 лют. 2014
 *      Author: sashko
 */

#include "ElectricCar.h"

ElectricCar::~ElectricCar() {}

void ElectricCar::fill(){cout<<"electric car is filled"<<endl;
}

time_duration ElectricCar::evaluateFuelingTime(){
	cout<<"time evaluated"<<endl;
	return minutes(10); //todo
}


