#include <iostream>
#include "bankaccount.h"
using namespace std;
class CheckingAcc: public BankAccount {
	public:
		float transact(float action); //deposit or withdraw money
		void maketransfer(float b, CheckingAcc c); //deposit or withdraw money
		print (); //declares the checking account balance
	private:
		float checkbalance; // amount left in account
 };