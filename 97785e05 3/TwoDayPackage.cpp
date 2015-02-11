#include <iostream>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"

using namespace std;

TwoDayPackage::TwoDayPackage(double weight, double cost, double fee)  :Package(weight, cost) {
	//Now the TwoDayPackageConstructor
	flatfee = 4.00; //default
	if (fee > 0) flatfee = fee;

	
	
}

double TwoDayPackage::CalculateCost() {
	double regcost = Package::CalculateCost(); //get the standard cost
	return regcost + flatfee;  //now add the flat fee and we're good
}



