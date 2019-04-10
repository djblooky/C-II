#include "pch.h"
#include <iostream>
#include "UserProfile.h"


UserProfile::UserProfile()
{
	name = createUserName();
}


UserProfile::~UserProfile()
{
}

std::string UserProfile::createUserName() 
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
