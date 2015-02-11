#include <iostream>
#include <string>
#include "Package.h"
#include "OvernightPackage.h"

using namespace std;

OvernightPackage::OvernightPackage (double weight, double cost, double addcost): Package(weight, cost) {   // inheritance constructor
	extraCostPerOunce = .45; // default
	extraCostPerOunce = addcost; 
}

double OvernightPackage::CalculateCost() {
	double regcost = Package::CalculateCost(); // the regular cost
	return regcost + pweight*extraCostPerOunce; // add the new cost
}
