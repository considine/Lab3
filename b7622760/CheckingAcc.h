#ifndef
#define CHECKINGACC_H
#include <iostream>
#include "bankaccount.h"
using namespace std;
class CheckingAcc: public bankaccount {
	public:
		CheckingAcc(float);
		float deposit(float action); //deposit money
		float withdraw(float action); //withdraw money
		void maketransfer(float b, CheckingAcc c); //transfer money to another account
		void print(); //displays balance
	private:
		float checkbalance; // amount left in account
 };
 #endif
