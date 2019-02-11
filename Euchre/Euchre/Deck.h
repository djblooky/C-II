#pragma once
#include <vector>
#include "Card.h"
#include "Player.h"

class Deck
{
private:
	std::vector<Card> *m_deck;
	Card *nine, *ten, *jack, *queen, *king, *joker;
public:
	Deck();
	~Deck(); //free all cards and deck vector
	void createDeck(); //makes four of each card type for 24 card deck and adds each one to m_deck vector
	void deal(std::vector<Player> &players); //deals to each player
	void shuffle();
	
};

