#include "stdafx.h"
#include "TurnEngine.h"


TurnEngine::TurnEngine(Player currentPlayer, Deck *deck)
{
	m_currentPlayer = currentPlayer;
	m_deck = deck;
}


TurnEngine::~TurnEngine()
{
}

void TurnEngine::turn() 
{
	replaceCard();
}

void TurnEngine::replaceCard()
{
	// if the turned up card from the deck has been chosen as trump, 
	//the dealer must remove a card from their hand and replace it with the trump card from the deck
}
