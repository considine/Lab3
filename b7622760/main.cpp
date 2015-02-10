//main.cpp
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "bankaccount.h"
#include "CreditCard.h"
#include "CheckingAcc.h"
using namespace std;

int main() {
	srand(time(NULL)); //seed rand based on the time
	//SET A RANDOM PIN UP TO SEVEN DIGITS
	int num = rand() % 999999;   // last 6 digits
	//the seventh digit cannot be zero, so the int will always appear as seven digits
	int sevendig = rand () % 9;
	num = num + sevendig*1000000;
	
	while (pin.length() != 4) {
		cout <<"Please enter a four number pin"<<endl;
		cin >> pin;
	}


	bankaccount bankaccount;
	cout << "cool" << endl;
	CreditCard CreditCard;
	cout << "cool" << endl;
	CheckingAcc Account(1.11);
	cout << "cool" << endl;

	return 0;
}