#include "pch.h"
#include "Account.h"


Account::Account()
{
}


Account::~Account()
{
}

void Account::deposit(double amount)
{
	balance += amount;
}

void Account::withdraw(double amount)
{
	if (amount == (5 || 10 || 20)) { //the user can only withdraw money in 5, 10 or 20 dollar increments.
		balance -= amount;
	}
	else {
		std::cout << "Invalid amount. Please withdraw in intervals of 5, 10, or 20." << std::endl;
	}
	
}

double Account::getBalance()
{
	return balance;
}
