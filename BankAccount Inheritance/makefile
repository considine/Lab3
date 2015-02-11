all: main

main: main.o BankAccount.o CreditCard.o CheckingAcc.o
	g++ main.o BankAccount.o CreditCard.o CheckingAcc.o -o main

main.o: main.cpp
	g++ -c main.cpp

BankAccount.o: BankAccount.cpp
	g++ -c BankAccount.cpp

CreditCard.o: CreditCard.cpp
	g++ -c CreditCard.cpp

CheckingAcc.o: CheckingAcc.cpp
	g++ -c CheckingAcc.cpp

clean:
	rm *.o main
