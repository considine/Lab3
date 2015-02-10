all: main

main: main.o bankaccount.o CreditCard.o CheckingAcc.o
g++ main.o bankaccount.o CreditCard.o CheckingAcc.o -o main

main.o: main.cpp
g++ -c main.cpp

bankaccount.o: bankaccount.cpp
g++ -c bankaccount.cpp

CreditCard.o: CreditCard.cpp
g++ -c CreditCard.cpp

CheckingAcc.o: CheckingAcc.cpp
g++ -c CheckingAcc.cpp

clean:
rm *.o main
