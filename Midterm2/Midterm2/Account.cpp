#include "stdafx.h"
#include "Account.h"


Account::Account(std::string name, UserProfile profile)
{
	m_name = name;
	m_balance = 0;
	m_profile = profile;
}


Account::~Account()
{
}

void Account::deposit(double amount)
{
	m_balance += amount;

	m_profile.logHistory(m_profile.getTransactionString(amount, *this));
	logAccountHistory((m_profile.getTransactionString(-amount, *this)));
}

void Account::withdraw(double amount)
{
	if (amount == 5 || amount == 10 || amount == 20) { //the user can only withdraw money in 5, 10 or 20 dollar increments.
		m_balance -= amount;
	}
	else {
		std::cout << "Invalid amount. Please withdraw in intervals of 5, 10, or 20." << std::endl;
	}

	m_profile.logHistory(m_profile.getTransactionString(-amount, *this));
	logAccountHistory(m_profile.getTransactionString(-amount, *this));
}

double Account::getBalance()
{
	return m_balance;
}

std::string Account::getAccountName()
{
	return m_name;
}

void Account::logAccountHistory(std::string transaction)
{
	m_history.push_back(transaction);
}

void Account::getAccountHistory()
{
	std::cout << "History for " << m_name << ":" << std::endl;
	for (auto &transaction : m_history) {
		std::cout << transaction;
	}
}
