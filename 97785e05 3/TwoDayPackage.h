//TwoDayPackage.h  -> inherits from Package.h
//
//	John Considine Harrison Le
//
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include <iostream>
#include <string>
#include "Package.h"


using namespace std;

class TwoDayPackage : public Package { //TwoDayPackage inherits from Package

	private: 
		double flatfee; // the flat free added to a twoday delivery
	public:
		TwoDayPackage(double, double, double); //the base class values and then the TwoDayPackage flat fee value		
		double CalculateCost(); //will be refined 
};

#endif
