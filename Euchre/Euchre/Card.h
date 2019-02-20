#pragma once
#include <iostream>
#include <string>

namespace card {
	enum suit { hearts = 0, diamonds, spades, clubs };
}

class Card
{
private:
	int m_rank;
	std::string m_name;
	card::suit m_suit;
	bool isRed;
public:
	Card(const std::string name, int rank, int s); //cards must be constructed with a name and value

	Card();
	int getRank();
	std::string getSuit();
	void setRank(int rank);
	void setSuit(int s);
	std::string getName();
};

