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
};

