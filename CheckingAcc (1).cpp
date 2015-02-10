#include <iostream>
#include "bankaccount.h"
#include "credit.h"
#include "checking.h"
using namespace std;


// constructor 
CheckingAcc::CheckingAcc{
	checkbalance = 300.00; //we'll start out with 300
	routingnum = 514234234;
}

CheckingAcc::print() {
	cout<<"you have "<<checkbalance<<"in your checking account!"<<endl;
}


