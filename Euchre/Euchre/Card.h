#pragma once
#include <iostream>
#include <string>

class Card
{
private:
	int m_rank;
	std::string m_name;
	enum suit { hearts = 0, diamonds, spades, clubs };
	suit m_suit;
public:
	Card(const std::string name, int rank, int s); //cards must be constructed with a name and value

	Card();
	int getRank();
	std::string getSuit();
	void setRank(int rank);
	void setSuit(int s);
	std::string getName();
};

