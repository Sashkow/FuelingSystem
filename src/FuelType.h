
/*
 * FuelType.h
 *
 *  Created on: 25 лют. 2014
 *      Author: sashko
 */

#ifndef FUELTYPE_H_
#define FUELTYPE_H_

#include <map>
#include <string>

using namespace std;

enum FuelType{PETROL, ELECTRICITY};

static map< FuelType, string> fuelUnitsMap{
    {FuelType::PETROL, "liters" },
    {FuelType::ELECTRICITY, "Ah" }
};


#endif /* FUELTYPE_H_ */
