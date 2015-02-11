//driver file
//	John Considine
//		Harrison Le
//

using namespace std;
#include <iostream> 
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"


int main() {
	double wweight = 20; double ccost = .50; double fee = 2; double extra = .50;
	Package norm(wweight, ccost);  
	cout << "For normal shipping from 1612 Forest Avenue, zipcode: 60091 Jack Considine,"<<endl<<" to 370 Keough Hall,zip code: 46556 Harrison Le,  Your cost is: "<<norm.CalculateCost()<<" dollars "<<endl<<endl;

	TwoDayPackage twoday(wweight, ccost, fee);  //rely on default for last value... wouldnt be fair to ask customer their price
	cout << "For two day shipping shipping from 473 Angela Street zipcode: 46556, Rick Sanchez,"<<endl<<" to 1029 Broken blvd,zipcode: 23434 Tom Dunlap, Your cost is "<<twoday.CalculateCost()<<" dollars"<<endl<<endl;
	OvernightPackage on(wweight, ccost, extra); //use default for extra cost per shipping
	cout << "Your cost for overnight shipping from 902 Walnut Street, zipcode 12345,"<<endl<<" Ryan Braun to 123 main street, zipcode 43783, Rick Perry is "<<on.CalculateCost()<<" dollars"<<endl<<endl;

}
