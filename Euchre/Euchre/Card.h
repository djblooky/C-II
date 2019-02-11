#pragma once
#include <iostream>

class Card
{
private:
	int m_value;
	std::string m_name;
public:
	Card(std::string name, int value); //cards must be constructed with a name and value
	~Card();

	int getValue();
	void setValue(int value);
	std::string getName();
};

