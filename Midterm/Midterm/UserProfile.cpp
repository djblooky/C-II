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

	//If a user tries to create an account when they have insufficient funds in 
	//one or more accounts, you must display the accounts in question.
}

void UserProfile::transferAmount(Account A, Account B, double amount) 
{
	A.withdraw(amount);
	B.deposit(amount);
	getTransaction(amount, A, B);
}

std::string UserProfile::getTransactionString(double amount, Account A) //for deposit and withdraw
{
	return;
}

std::string UserProfile::getTransactionString(double amount, Account A, Account B) { //for transfer
	return m_name + " has transfered $" + std::to_string(amount) + " from " + A.getAccountName() + " to " + B.getAccountName();
 }

void logHistory(std::string transaction)
{
	//add string to vector of transactions
}
