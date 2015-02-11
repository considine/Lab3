// John Considine, Harrison Le
// 	Lab  3
//		CreditCard.h
#ifndef CREDITCARD_H
#define CREDITCARD_H
#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;

class CreditCard: public BankAccount {
public:
	CreditCard(float num, string p); //non default constructor
	void makepurchase(float purch); //uses credit card to send money
	void makepayment(float pay); //makes a payment to balane of credit card
	float getbalance(); // returns balance
	int checkceiling(float a); //checks if balance would esceed ceiling
private:
	float balance; // credit card balance
	float ceiling; // credit ceiling of card
};
#endif