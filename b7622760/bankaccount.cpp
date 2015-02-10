// John Considine
// 	Lab3
// 		bankaccount.cpp
#include <iostream>
#include "bankaccount.h"
#include <time.h> 


using namespace std;

//contructor 
bankaccount::bankaccount() {  //account number and user pin
	srand(time(NULL)); //seed rand based on the time
	//SET A RANDOM PIN UP TO SEVEN DIGITS
	accountnum = rand() % 999999;   // last 6 digits
	//the seventh digit cannot be zero, so the int will always appear as seven digits
	int sevendig = rand () % 9;
	accountnum = accountnum + sevendig*1000000;
	
	while (pin.length != 4) {
		cout <<"Please enter a four number pin"<<endl;
		cin >> pin;;
	}

}
