/*
 * PetrolCar.cpp
 *
 *  Created on: 23 лют. 2014
 *      Author: sashko
 */

#include "PetrolCar.h"

ptime PetrolCar::evaluateFuelingTime(){
		ptime t=second_clock::local_time();
		return t;
	}

void PetrolCar::fill(){cout<<"petrol car is filled"<<endl;}

//PetrolCar::PetrolCar(){}




