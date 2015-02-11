// John Considine, Harrison Le
// 	Lab  3
// 		creddit.cpp
#include <iostream>
#include <string>
#include "CreditCard.h"
using namespace std;


CreditCard::CreditCard(float num, string p) {
	bank.setAccountNum(num);
	bank.setPIN(p);
	balance = 0; //No balance to start
	ceiling = 1000; //credit ceiling that cannot be passed
}

void CreditCard::makepurchase(float purch) {
	balance += purch;

	return;
}

void CreditCard::makepayment(float pay) {
	balance -= pay;

	return;
}

float CreditCard::getbalance() { // returns balance
	return balance; 
}

int CreditCard::checkceiling(float a) {
	int yes;

	if (a + balance > ceiling) {
		yes = 1;
	}
	else {
		yes = 0;
	}

	return yes;
};