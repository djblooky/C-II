#include "stdafx.h"
#include "TurnEngine.h"


TurnEngine::TurnEngine()
{
}

TurnEngine::~TurnEngine()
{
	
}

void TurnEngine::playHand(Player p, Deck d)
{
	//To play a hand of euchre, the player on the dealer's left starts with a card, 
	//if that card is trump, then all players if they have a card of that suit 
	//(remember the jack of the same suit is also trump) must play a trump card. 
	//if not they may play any card. The team with the highest card wins a point. 
	//Repeat this process until there are no cards left in any player's hands.
}

void TurnEngine::wholeUp(Player dealer, Deck d) 
{
	// if the turned up card from the deck has been chosen as trump, 
	//the dealer must remove a card from their hand and replace it with the trump card from the deck
}
