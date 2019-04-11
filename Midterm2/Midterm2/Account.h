#pragma once
#include <iostream>
#include "UserProfile.h"


class Account
{
private:
	double m_balance;
	std::string m_name;
	UserProfile m_profile;

public:
	Account();
	~Account();
	void deposit(double amount);
	void withdraw(double amount);
	double getBalance();
	std::string getAccountName();
};

