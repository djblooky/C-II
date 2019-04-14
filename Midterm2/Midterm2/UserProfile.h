#pragma once
class Account;
#include <string>
#include <vector>


class UserProfile
{
private:
	std::string m_name;
	std::string m_address;
	int m_uniqueID;
	std::vector<Account> m_accounts;
	std::vector<std::string> m_history;
	std::vector<Account> m_insufficient;
public:
	UserProfile();
	~UserProfile();
	std::string getUserName();
	void createAccount();
	bool areFundsSufficient(double amount);
	int getNumberOfAccounts();
	void transferAmount(Account A, Account B, double amount);
	std::string getTransactionString(double amount, Account A);
	std::string getTransactionString(double amount, Account A, Account B);
	void logHistory(std::string transaction);
	void getTransactionHistory();
};