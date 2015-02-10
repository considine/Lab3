#include <iostream>
#include "CheckingAcc.h"
using namespace std;

void maketransfer(float b, CheckingAcc c) {
	balance -= b;
	c.balance += b;
	return 0;
}

maketransfer