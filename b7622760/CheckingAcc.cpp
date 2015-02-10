#include <iostream>
#include "CheckingAcc.h"
using namespace std;

CheckingAcc::CheckingAcc(float deposit) {

}

float CheckingAcc::deposit(float action) {
	balance += action;

	return action;
}

float CheckingAcc::withdraw(float action) {
	balance -= action;

	return (-1)*action;
}

void CheckingAcc::maketransfer(float b, CheckingAcc c) {
	balance -= b;
	c.balance += b;
	
	return;
}

void CheckingAcc::print() {
	cout << balance;

	return;
}