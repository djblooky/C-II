#pragma once
#include "UserProfile.h"
class Account :
	public UserProfile
{
private:
	int balance;

public:
	Account();
	~Account();
	void deposit(int amount);
	void withdraw(int amount);
};

