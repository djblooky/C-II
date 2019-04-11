#pragma once
#include <iostream>
#include <vector>
#include "Account.h"

class UserProfile
{
private:
	std::string m_name;
	std::string m_address;
	int m_uniqueID;
	std::vector<Account> m_accounts;
	std::vector<std::string> m_history;
public:
	UserProfile();
	~UserProfile();
	std::string getUserName();
	void createAccount();
	void transferAmount(Account A, Account B, double amount);
	std::string getTransactionString(double amount, Account A);
	std::string getTransactionString(double amount, Account A, Account B);
};

