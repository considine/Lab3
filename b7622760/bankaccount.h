// John Considine Harrison Le
//    Feb 4, 2014
//            Lab 3

#ifndef 
#define BANKACCOUNT_H
#include <string>
using namespace std;

class bankaccount  {
	public:
		int transact(); //deposit or withdraw money
	protected://stuff that only inherited members have access to
		int accountnum;// bank account number
		string ownername; // name associated with the owner
		int pin; //the pin number for associated accounts
		
};

