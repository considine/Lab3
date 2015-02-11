// John Considine Harrison LE
// 	Package.cpp
//
//

using namespace std;
#include <iostream>
#include "Package.h"

Package::Package(double weight, double cost) {   //constructor
	//defaults:
	pweight = 20; // default 20 oz
	costpoz = .45; //$ per oz
	if (weight > 0) pweight = weight;  //ensure that weight and cost greater than zero
	if (cost > 0) costpoz = cost;    // non default values

}

double Package::CalculateCost(){
	return costpoz * pweight;  //returns the weight times cost per wieght
}


