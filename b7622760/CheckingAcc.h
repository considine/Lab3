#include <iostream>
using namespace std;
class CheckingAcc: public BankAccount {
	public:
		void transact(float b, CheckingAcc c); //deposit or withdraw money
		maketransfer(float);
		print (); //declares the checking account balance
	private:
		float checkbalance; // amount left in account
 };