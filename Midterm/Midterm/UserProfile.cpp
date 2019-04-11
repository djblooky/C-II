#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
#include "UserProfile.h"


UserProfile::UserProfile()
{
	m_name = getUserName();
	//m_address = getUserAddress();
	//m_uniqueID = generateUniqueID();
}


UserProfile::~UserProfile()
{
}

std::string UserProfile::getUserName() 
{
	std::string name;
	std::cin >> name;
	return name;
}

void UserProfile::createAccount()
{
	//if all of their current accounts have a balance greater than 25 dollars
	//if(areFundsSufficient(25) && )

	//If a user tries to create an account when they have insufficient funds in 
	//one or more accounts, you must display the accounts in question.
}

bool UserProfile::areFundsSufficient(double amount) //checks if funds are greater than specified amount
{
	int insufficientCount = 0;

	for (auto &account : m_accounts) { //for each account
		if (!(account.getBalance() > amount)) { //if account balance is not greater than amount
			insufficientCount++;
		}
	}

	if (insufficientCount > 0) { //if at least one account has insufficient funda
		return false;
	}
	else {
		return true;
	}	
}

int UserProfile::getNumberOfAccounts()
{
	return m_accounts.size();
}
