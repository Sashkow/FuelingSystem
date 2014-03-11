
#include "FuelingPoint.h"

FuelingPoint::FuelingPoint(){
	this->state=FREE;

}

void FuelingPoint::updateState(){
	if(this->state==FREE){
		if(!(this->vehicleDeque.empty())){
			 this->vehicleDeque.pop_front(); //it should have checked whether the fueling time has passed, but it i simplified
		}

	}


}

FuelingPoint::~FuelingPoint() {


}

