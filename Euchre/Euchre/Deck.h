#pragma once
#include <vector>
#include "Card.h"
#include "Player.h"

class Deck
{
private:
	std::vector<Card> m_deck; 
	bool isShuffled;
	Card trumpCard;
	std::string trumpSuit;
public:
	Deck();
	~Deck(); 
	void createDeck(); //makes four of each card type for 24 card deck and adds each one to m_deck vector
	void deal(std::vector<Player> &players); //deals to each player
	void deal(Player &player, const int numOfCards);
	void shuffle();
	void setTrumpCard();
	void setTrumpSuit(std::string suit);
	Card getTrumpCard();
};

