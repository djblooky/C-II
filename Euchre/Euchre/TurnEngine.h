#pragma once
#include "Deck.h"

class TurnEngine
{
private:
	
public:
	TurnEngine();
	~TurnEngine();
	void playHand(Player p, Deck d);
	void wholeUp(Player dealer, Deck d);
};

