// John Considine Harrison Le
//    Feb 4, 2014
//            Lab 3

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>
using namespace std;

class bankaccount  {
	public:
		bankaccount();
	protected://stuff that only inherited members have access to
		int accountnum;// bank account number
		string pin; //the pin number for associated accounts
};

//this is a test

#endif