#include "stdafx.h"
#include "Card.h"

Card::Card(const std::string name, int rank, int s)
{
	m_name = name;
	m_rank = rank;
	m_suit = static_cast<card::suit>(s); //sets card suit from number values
}
Card::Card() 
{
	
}

int Card::getRank()
{
	return m_rank;
}

std::string Card::getSuit()
{
	std::string suitString;

	switch (m_suit) {
		case card::hearts: suitString = "Hearts";
			break;
		case card::diamonds: suitString = "Diamonds";
			break;
		case card::clubs: suitString = "Clubs";
			break;
		case card::spades: suitString = "Spades";
			break;
	}

	return suitString;
}

void Card::setRank(int rank)
{
	m_rank = rank;
}

void Card::setSuit(int s)
{
	m_suit = static_cast<card::suit>(s);

	if (s < 3) {
		isRed = true;
	}
}

std::string Card::getName()
{
	return m_name;
}
