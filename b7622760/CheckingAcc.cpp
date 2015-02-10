#include <iostream>
#include "CheckingAcc.h"
using namespace std;

CheckingAcc::CheckingAcc(float deposit) {
	checkbalance = deposit;
}

float CheckingAcc::deposit(float action) {
	checkbalance += action;

	return action;
}

float CheckingAcc::withdraw(float action) {
	checkbalance -= action;

	return (-1)*action;
}

void CheckingAcc::maketransfer(float b, CheckingAcc c) {
	checkbalance -= b;
	c.checkbalance += b;

	return;
}

void CheckingAcc::print() {
	cout << checkbalance;

	return;
}