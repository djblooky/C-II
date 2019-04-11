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
public:
	UserProfile();
	~UserProfile();
	std::string getUserName();
	void createAccount();
	bool areFundsSufficient(double amount);
	int getNumberOfAccounts();
};

