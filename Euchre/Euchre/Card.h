#pragma once
#include <iostream>
#include <string>

class Card
{
private:
	int m_value;
	std::string m_name;
	enum suit{hearts = 0, diamonds, spades, clubs};
	suit m_suit;
public:
	Card(std::string name, const int value, const int s); //cards must be constructed with a name and value
	~Card();

	int getValue();
	void setValue(int value);
	std::string getName();
};

