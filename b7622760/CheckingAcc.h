#include <iostream>
using namespace std;
class CheckingAcc: public BankAccount {
	public:
		float transact(); //deposit or withdraw money
		void maketransfer(float b, CheckingAcc c); //deposit or withdraw money
		print (); //declares the checking account balance
	private:
		float checkbalance; // amount left in account
 };