#pragma once
#include <iostream>
class UserProfile;


class Account
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

