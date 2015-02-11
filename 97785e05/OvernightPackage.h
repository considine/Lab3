#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include <iostream>
#include <string>
#include "Package.h"


class OvernightPackage: public Package { //overnight package

	private:
		double extraCostPerOunce; // the extra cost for this overnight
	public:
		OvernightPackage(double, double, double); //constructor that takes value for extra costPerOz 
		double CalculateCost(); // the new calculate cost function

};
 


#endif
