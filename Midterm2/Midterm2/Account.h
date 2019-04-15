#pragma once
#include <iostream>
#include "UserProfile.h"


class Account
{
private:
	double m_balance;
	std::string m_name;
	UserProfile m_profile;
	std::vector<std::string> m_history;
public:
	Account(std::string name, UserProfile profile);
	~Account();
	void deposit(double amount);
	void withdraw(double amount);
	double getBalance();
	std::string getAccountName();
	void logAccountHistory(std::string transaction);
	void getAccountHistory();
};

