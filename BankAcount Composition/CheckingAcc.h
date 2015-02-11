// John Considine, Harrison Le
// 	Lab  3
//		CheckingAcc.h
#ifndef CHECKINGACC_H
#define CHECKINGACC_H
#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;
class CheckingAcc {
	public:
		CheckingAcc(); //default constructor for dummy object
		CheckingAcc(float num, string p); //non default constructor
		float deposit(float action); //deposit money
		float withdraw(float action); //withdraw money
		void maketransfer(float b, CheckingAcc &c); //transfer money to another account
		float getbalance(); //displays balance
	private:
		float balance; //amount left in account
		BankAccount bank;
 };
 #endif
