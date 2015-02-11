// John Considine, Harrison Le
// 	Lab  3
//		main.cpp
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>
#include "BankAccount.h"
#include "CreditCard.h"
#include "CheckingAcc.h"
using namespace std;

int main() {
	int num, sevendig, pick = 1;
	float amount; //used to store transaction amounts
	string pin;

	CheckingAcc moneydump; //dummy object to transfer money into

	srand(time(NULL)); //seed rand based on the time
	//SET A RANDOM PIN UP TO SEVEN DIGITS
	num = rand() % 999999;   // last 6 digits
	//the seventh digit cannot be zero, so the int will always appear as seven digits
	sevendig = rand () % 9;
	num = num + sevendig*1000000;

	while (pin.length() != 4) { //checks for corredt input of pin
		cout <<"Please enter a four number pin"<<endl;
		cin >> pin;
	}

	cout << "Your account number is: " << num << endl << "And your PIN is:" << pin << endl;

	CheckingAcc check(num, pin); //creates personal checking and credit accounts
	CreditCard credit(num, pin);

	while(1) {
		cout << "Would you like to access your checking account or manage your credit card?\n\n"
		"1. Checking Account\n"
		"2. Manage my Credit Card\n"
		"0. Get me out of here!\n";
		cin >> pick;

		if (pick == 0) {
			break;
		}
		else if (pick == 1) {
			while (pick) {
				cout << "What would you like to do?\n\n"
				"1. Make a deposit!\n"
				"2. Make a withdrawal!\n"
				"3. Make a transfer!\n"
				"4. Check my balance!\n"
				"0. Get me out of here!\n";
				cin >> pick;
	
				switch (pick) { //switch for variaous checking functions
					case 1:
						cout << "How much would you like to deposit: ";
						cin >> amount;
						check.deposit(amount);
						cout << "You deposited $" << amount << endl;

						break;
					case 2:
						cout << "How much would you like to withdraw: ";
						cin >> amount;
						if (check.getbalance() >= amount) {
							check.withdraw(amount);
							cout << "You withdrew $" << amount << endl;
						}
						else {
							cout << "Balance is too low!" << endl;
						}

						break;
					case 3:
						cout << "How much would you like to transfer: ";
						cin >> amount;
						if (check.getbalance() >= amount) {
							check.maketransfer(amount, moneydump);
							cout << "You transferred $" << amount << " to 7146312." <<  endl;
						}
						else {
							cout << "Balance is too low!" << endl;
						}
						
						break;
					case 4:
						cout << "Your balance is $" << check.getbalance() << endl;

						break;
				}
			}
		}
		else if (pick == 2) {
			while (pick) {
				cout << "What would you like to do?\n\n"
				"1. Make a purchase!\n"
				"2. Make a payment!\n"
				"3. Check my balance!\n"
				"0. Get me out of here!\n";
				cin >> pick;
	
				switch (pick) { //switch for various credit functions
					case 1:
						cout << "What is the cost of your order: ";
						cin >> amount;
						if (credit.checkceiling(amount)) {
							cout << "You are above your $1000 credit limit!" << endl;
						}
						else {
							credit.makepurchase(amount);
							cout << "You made a purchase of $" << amount << endl;
						}

						break;
					case 2:
						cout << "How much would you pay: ";
						cin >> amount;
						if (amount > credit.getbalance()) {
							cout << "Yoour balance does not require tht large of a payment!" << endl;
						}
						else {
							credit.makepayment(amount);
							cout << "You made a payment of $" << amount << endl;
						}

						break;
					case 3:
						cout <<"Your outstanding credit card balance is $"<< credit.getbalance() << endl;

						break;
				}
			}
		}
	}

	cout << "Goodbye!" << endl;

	return 0;
}