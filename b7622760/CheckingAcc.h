#include <iostream>
#include "bankaccount.h"
using namespace std;
class CheckingAcc: public BankAccount {
	public:
		CheckingAcc(float);
		float deposit(float action); //deposit money
		float withdraw(float action); //withdraw money
		void maketransfer(float b, CheckingAcc c); //transfer money to another account
		void print(); //displays balance
	private:
		float balance; // amount left in account
 };