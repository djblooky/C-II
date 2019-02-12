#pragma once
#include <iostream>
#include <string>

class Card
{
private:
	int m_value;
	std::string m_name;
public:
	Card(std::string name, const int value); //cards must be constructed with a name and value
	~Card();

	int getValue();
	void setValue(int value);
	std::string getName();
};

