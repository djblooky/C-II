#include "stdafx.h"
#include "Card.h"

Card::Card(const std::string name, int rank, int s)
{
	m_name = name;
	m_rank = rank;
	m_suit = static_cast<suit>(s); //sets card suit from number values
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
		case hearts: suitString = "Hearts";
			break;
		case diamonds: suitString = "Diamonds";
			break;
		case clubs: suitString = "Clubs";
			break;
		case spades: suitString = "Spades";
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
	m_suit = static_cast<suit>(s);
}

std::string Card::getName()
{
	return m_name;
}
