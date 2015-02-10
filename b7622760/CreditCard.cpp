// John Considine Harrison Le
// 	Lab  3
// 		creddit.cpp
#include <iostream>
#include "CreditCard.h"
using namespace std;

// constructor 
CreditCard::CreditCard () {
	creditbalance = 0.00; //No balance to start
}

void CreditCard::makepurchase(float purch) {
	creditbalance += purch;

	return;
}

void CreditCard::makepayment(float pay) {
	creditbalance -= pay;

	return;
}

void CreditCard::print() {  //print function within credit card
	cout <<"your outstanding credit card balance is: "<< creditbalance<< endl;

	return; 
}


