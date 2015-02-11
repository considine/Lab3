//John Considine, Harrison Le
//	Feb 4, 2014
//		Lab 3
//			BankAccount.h
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>
using namespace std;

class BankAccount {
	public:
		void setAccountNum(int num); //sets the accountnum variable
		void setPIN(string p); //sets the pin variable
	protected://stuff that only inherited members have access to
		int accountnum;// bank account number
		string pin; //the pin number for associated accounts
};
#endif