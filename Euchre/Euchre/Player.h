#pragma once
#include <iostream>
#include <vector>
#include "Card.h"

class Player
{
private:
	bool isDealer;
	std::string m_name;
	std::vector<Card*> m_hand;
public:
	Player();
	~Player();
	void addToHand(Card *card);
};

