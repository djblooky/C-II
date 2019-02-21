#pragma once
#include <iostream>
#include <vector>
#include "Card.h"
class Deck;

class Player
{
private:
	bool isDealer;
	std::string m_name;
	std::vector<Card> m_hand;
public:
	Player();
	~Player();
	void addToHand(Card card);
	void displayHand();
	void rankHand(Deck &d);
	void setName(std::string name);
	void setDealer(bool d);
	std::string getName();
};

