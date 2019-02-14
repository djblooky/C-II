#pragma once
#include "Player.h"
#include "Deck.h"

class Tester
{
private:
	Player m_p1, m_p2, m_p3, m_p4;
	Deck m_deck;
	std::vector<Player> m_players;
public:
	Tester();
	~Tester();
	void displayHands();
	void test();
	
};

