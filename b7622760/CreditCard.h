//CreditCard.h
#ifndef
#define CREDITCARD_H
#include <iostream>
#include "bankaccount.h"
using namespace std;

class CreditCard: public bankaccount {
public:
	CreditCard();
	void makepurchase(float purch);
	void makepayment(float pay);
	void print(); //declares the current credit balance
private:
	float creditbalance; // credit card balance
};
#endif