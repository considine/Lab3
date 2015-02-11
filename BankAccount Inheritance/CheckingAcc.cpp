// John Considine, Harrison Le
// 	Lab  3
//		CheckingAcc.cpp
#include <iostream>
#include <string>
#include "CheckingAcc.h"
using namespace std;

CheckingAcc::CheckingAcc() {
	setAccountNum(7146312);
}

CheckingAcc::CheckingAcc(float num, string p) {
	setAccountNum(num);
	setPIN(p);
	balance = 0; //sets beginning balance to zero
}

float CheckingAcc::deposit(float action) {
	balance += action; //increases balance

	return action;
}

float CheckingAcc::withdraw(float action) {
	balance -= action; //decreases balance

	return (-1)*action;
}

void CheckingAcc::maketransfer(float b, CheckingAcc &c) {
	balance -= b;
	c.balance += b; //transfers money to moneydump object

	return;
}

float CheckingAcc::getbalance() {
	return balance; //returns the balance
}