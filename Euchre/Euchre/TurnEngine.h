#pragma once
#include <vector>

class TurnEngine
{
private:
	bool mustPlayTrump;
	std::vector<Card> pile; //holds cards played
public:
	TurnEngine();
	~TurnEngine();
	void playHand(Player p, Deck d);
	void wholeUp(Player dealer, Deck d);
	Card getWinningCard();
};

