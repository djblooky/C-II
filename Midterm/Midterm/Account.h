#pragma once
#include "UserProfile.h"
class Account :
	public UserProfile
{
private:
	double m_balance;
	std::string m_name;

public:
	Account();
	~Account();
	void deposit(double amount);
	void withdraw(double amount);
	double getBalance();
	std::string getAccountName();
};

