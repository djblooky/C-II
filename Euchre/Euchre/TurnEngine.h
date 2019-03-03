#pragma once
#include "Deck.h"

class TurnEngine
{
private:
	Deck *m_deck;
	Player m_currentPlayer;
public:
	TurnEngine(Player cP, Deck *d);
	~TurnEngine();
	void turn();
	void replaceCard();
};

