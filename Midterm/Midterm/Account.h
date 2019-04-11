#pragma once
#include "UserProfile.h"
class Account :
	public UserProfile
{
private:
	double balance;

public:
	Account();
	~Account();
	void deposit(double amount);
	void withdraw(double amount);
	double getBalance();
};

