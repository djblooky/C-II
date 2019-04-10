#pragma once
#include <iostream>
#include <vector>
#include "Account.h"

class UserProfile
{
private:
	std::string name;
	std::string address;
	int indentifier;
	std::vector<Account> accounts;
public:
	UserProfile();
	~UserProfile();
	std::string getUserName();
	void createAccount();
};

