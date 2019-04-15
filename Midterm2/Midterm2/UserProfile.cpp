#include "stdafx.h"
#include "UserProfile.h"
#include "Account.h"
#include <iostream>
#include <vector>

/*
#include <cmath>
#include <iomanip>
*/


UserProfile::UserProfile(std::string name, std::string address, int ID)
{
	*m_name = name;
	*m_address = address;
	m_uniqueID = ID;
}

UserProfile::UserProfile()
{
	*m_name = "User";
}


UserProfile::~UserProfile()
{
	delete m_name;
	delete m_address;
}

void UserProfile::createAccount(std::string accountName)
{
	//if all of their current accounts have a balance greater than 25 dollars
	if(areFundsSufficient(25))
	{
		Account account(accountName, *this);
		m_accounts.push_back(account);
	}
	else {
		//If a user tries to create an account when they have insufficient funds in 
		//one or more accounts, you must display the accounts in question.

		std::cout << "Insufficient accounts: " << std::endl;
		for (auto &account : m_insufficient) {
			std::cout << account.getAccountName() << ", Current Balance: $" << account.getBalance();
		}
	}
	
}

bool UserProfile::areFundsSufficient(double amount) //checks if funds are greater than specified amount
{
	int insufficientCount = 0;
	m_insufficient.clear(); //clears storage of insufficient accounts

	for (auto &account : m_accounts) { //for each account
		if (!(account.getBalance() > amount)) { //if account balance is not greater than amount
			insufficientCount++;
			m_insufficient.push_back(account);
		}
	}

	if (insufficientCount > 0) { //if at least one account has insufficient funds
		return false;
	}
	else {
		return true;
	}
}

int UserProfile::getNumberOfAccounts()
{
	return static_cast<int>(m_accounts.size());
}

void UserProfile::transferAmount(Account A, Account B, double amount)
{
	A.withdraw(amount);
	B.deposit(amount);
	logHistory(getTransactionString(amount, A, B));
	A.logAccountHistory(getTransactionString(amount, A, B));
	B.logAccountHistory(getTransactionString(amount, A, B));
}

std::string UserProfile::getTransactionString(double amount, Account A) //for deposit and withdraw
{
	if (amount < 0) {
		return *m_name + " has withdrawn " + std::to_string(abs(amount)) + " from " + A.getAccountName();
	}
	else {
		return *m_name + " has deposited " + std::to_string(amount) + " into " + A.getAccountName();
	}
}

std::string UserProfile::getTransactionString(double amount, Account A, Account B) { //for transfer
	return *m_name + " has transfered $" + std::to_string(amount) + " from " + A.getAccountName() + " to " + B.getAccountName();
}

void UserProfile::logHistory(std::string transaction)
{
	m_history.push_back(transaction);//add string to vector of transactions
}

void UserProfile::getTransactionHistory()
{
	for (auto &transaction : m_history) { //display each transaction in history
		std::cout << transaction;
	}
}

Account UserProfile::getAccount(int accountNum)
{
	return m_accounts[accountNum-1];
}
