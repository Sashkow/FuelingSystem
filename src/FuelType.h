
#ifndef FUELTYPE_H_
#define FUELTYPE_H_

#include <map>
#include <string>

using namespace std;

enum FuelType{PETROL=0, ELECTRICITY, fuelTypesAmount};

static map< FuelType, string> fuelUnitsMap{
    {FuelType::PETROL, "liters" },
    {FuelType::ELECTRICITY, "Ah" }
};


#endif /* FUELTYPE_H_ */
