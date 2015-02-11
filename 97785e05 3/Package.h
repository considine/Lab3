#ifndef PACKAGE_H
#define PACKAGE_H
#include <iostream>
#include <string>
using namespace std;



class Package {
	private:
		string sname[];
		string saddress[];
		int scode;			//SENDER AND RECIEVER INFO
		string rname[];
                string raddress[];
                int rcode;
		double costpoz; //cost perounce of package
	protected:  //this way so extracostperounce may access weight
		double pweight; // the weight of the package
	public:
		Package(double, double);  
		double CalculateCost(); //returns pweight x costpoz, input is the twodayt shipping fee
};

#endif
