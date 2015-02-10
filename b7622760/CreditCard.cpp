// John Considine Harrison Le
// 	Lab  3
// 		creddit.cpp
//
//
#include <iostream>
#include "bankaccount.h"
#include "CreditCard.h"
#include "CheckingAcc.h"
using namespace std;



// constructor 
CreditCard::CreditCard () {
	float creditbalance = 0.00; //No balance to start

}


CreditCard::print() {  //print function within credit card
	cout <<"your outstanding credit card balance is: "<<creditbalance<<endl; 
}


