//============================================================================
// Name        : FuelingSystem.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "boost/date_time/gregorian/gregorian.hpp"
#include <stdlib.h>

#include "Vehicle.h"
#include "Vehicles/PetrolCar.h"
#include "VehicleFactory.h"
#include "Simulation.h"

//#include "koolplot1_2/koolplot.h"



using namespace boost::gregorian;
using namespace std;



int main() {
	/*date weekstart(2002,Feb,1);
	    date weekend  = weekstart + weeks(1);
	    date d2 = d2 + days(5);
	    date today = day_clock::local_day();
	    date d1 = day_clock::local_day();
	    if (d2 >= today) {} //date comparison operators

	    date_period thisWeek(d1,d2);
	    if (thisWeek.contains(today)) {}//do something

	    //iterate and print the week
	    day_iterator itr(weekstart);
	    while (itr <= weekend) {
	     std::cout << (*itr) << std::endl;
	     ++itr;
	    }
	    //input streaming
	    date d3;
	    std::stringstream ss("2004-Jan-1");
	    ss >> d3;


	    date d4;
	    //date generator functions
	    //date d5 = next_weekday(d1, "Sunday"); //calculate Sunday following d4

	    //US labor day is first Monday in Sept
		typedef nth_day_of_the_week_in_month nth_dow;
	    nth_dow labor_day(nth_dow::first,Monday, Sep);
	    //calculate a specific date for 2004 from functor
	    date d6 = labor_day.get_date(2004);*/



	VehicleFactory vehicleFactory=VehicleFactory();


	Vehicle* v=vehicleFactory.newVehicle("PetrolCar");
	cout<< v->evaluateFuelingTime()<<endl;


	Simulation sim=Simulation();
	//time_duration dur=hours(1)+minutes(2);
	sim.setArrivalRate(60);
	sim.setStepLength(minutes(2));
	sim.setCurrentTimestep(3);
/*
	sim.evaluatePoissonArivalProbabilityDistribution();
	for (int i = 0; i < sim.getArrivalProbabilityDistribution().size(); ++i) {

		cout<< "p(" <<i<<") = "<< (sim.getArrivalProbabilityDistribution())[i]<<
				" sum_p("<<i<<") ="<<(sim.getCummmulativeArrivalProbabilityDistribution())[i]<<endl;

	}
*/


	//vector<Vehicle> v=sim.generateVehicles();

	//cout<<&v[0]<<endl;


	//Plotdata x(-3.0, 3.0), y = sin(x) - 0.5*x;
	//plot(x, y);


	return 0;
}
