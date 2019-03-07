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

void TurnEngine::playHand(Player &p, Deck &d)
{
	Card trump = p.getTrumpCard(d);

	if (p.hasTrumpCard(d)) { //if player has trump card
		mustPlayTrump = true;
		p.playCard(trump);
		addToPile(trump);
	}

	//if that card is trump, then all players if they have a card of that suit 
	//(remember the jack of the same suit is also trump) must play a trump card.

		if (mustPlayTrump && p.hasTrumpCard(d)) {
			p.playCard(trump);
			addToPile(trump);
		}
	 
	//if not they may play any card. The team with the highest card wins a point. 
	//Repeat this process until there are no cards left in any player's hands.
}

void TurnEngine::wholeUp(Player &dealer, Deck &d) 
{
	Card trump = dealer.getTrumpCard(d);

	// if the turned up card from the deck has been chosen as trump, 
	if (d.getTrumpCard().getName() == d.getTopCard().getName() && d.getTrumpCard().getSuit() == d.getTopCard().getSuit()) {
		dealer.removeTopCard(); //remove card from dealer's hand
		dealer.addToHand(trump); //add trump card to dealer's hand
		d.removeCard(d.getTrumpCard()); //remove trump card from the deck
	}	
}

Card TurnEngine::getWinningCard() //returns card with winning rank
{
	Card winCard;
	winCard.setRank(100);

	for (auto &card : pile) {
		if (card.getRank() < winCard.getRank()) { //if the card has a higher rank than the last card
			winCard = card; //set as best card
		}
	}
	return winCard;
}

void TurnEngine::addToPile(Card card)
{
	pile.push_back(card);
}

void TurnEngine::checkRoundWinner() { //gives point to winner

	getWinningCard().getWhoPlayedIt().addPoint();
}