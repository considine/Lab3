#include <iostream>
#include "CheckingAcc.h"
using namespace std;

float transact(float action) {
	balance -= action;

	return action;
}

void maketransfer(float b, CheckingAcc c) {
	balance -= b;
	c.balance += b;
	return 0;
}