#pragma once
#include "Player.h"
#include "Deck.h"

class Game
{
private:
	Player m_p1, m_p2, m_p3, m_p4;
	Deck *m_deck;
	std::vector<Player> m_players;
	void pickDealer();
public:
	Game();
	~Game();
	void displayHands();
	void rankHands();
	void rankHand(Player &p);

	void test(); //temporary method to test each homework
	void game(); 
	void round(Deck deck);
	
};

