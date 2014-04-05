
#ifndef FUELINGPOINT_H_
#define FUELINGPOINT_H_

#include <vector>
#include <deque>
#include "Vehicle.h"

using namespace std;

enum FuelingPointState{FREE=0,BUSY};

class FuelingPoint {
private:
	FuelingPointState state;
	deque<Vehicle*> vehicleDeque;


public:
	FuelingPoint();
	~FuelingPoint();
	void updateState();


FuelingPointState getState() const {
	return state;
}

void setState(FuelingPointState state) {
	this->state = state;
}

deque<Vehicle*> getVehicleDeque() const {
	return vehicleDeque;
}

void setVehicleDeque(deque<Vehicle*> vehicleDeque) {
	this->vehicleDeque = vehicleDeque;
}
};

#endif /* FUELINGPOINT_H_ */
