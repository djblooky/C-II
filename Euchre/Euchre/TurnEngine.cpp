#include "stdafx.h"
#include "TurnEngine.h"
#include "Card.h"
#include "Deck.h"

TurnEngine::TurnEngine()
{
	mustPlayTrump = false;
}

TurnEngine::~TurnEngine()
{
	
}

void TurnEngine::playHand(Player p, Deck d)
{
	//if (p.hasTrumpCard()) { //if player has trump card
		mustPlayTrump = true;
		//p.playCard(p.getTrump())
	//}

	//if that card is trump, then all players if they have a card of that suit 
	//(remember the jack of the same suit is also trump) must play a trump card.

		if (mustPlayTrump && p.hasTrumpCard()) {
			//p.playCard(p.getTrumpCard()); 
		}
	 
	//if not they may play any card. The team with the highest card wins a point. 
	//Repeat this process until there are no cards left in any player's hands.
}

void TurnEngine::wholeUp(Player dealer, Deck d) 
{
	// if the turned up card from the deck has been chosen as trump, 
	if (d.getTrumpCard().getName() == d.getTopCard().getName() && d.getTrumpCard().getSuit() == d.getTopCard().getSuit()) {
		//dealer.RemoveTopCard(); //remove card from dealer's hand
		dealer.addToHand(d.getTrumpCard()); //add trump card to dealer's hand
		//d.removeCard(d.getTrumpCard()); //remove trump card from the deck
	}	
}

Card TurnEngine::getWinningCard()
{
	Card winCard;

	for (auto &card : pile) {
		card.getRank();
	}

	return winCard;
}
