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

ptime ElectricCar::evaluateFuelingTime(){
	cout<<"time evaluated"<<endl;
	return second_clock::local_time();
}


