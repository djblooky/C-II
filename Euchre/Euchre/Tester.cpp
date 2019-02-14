#include "stdafx.h"
#include "Tester.h"


Tester::Tester()
{
	m_p1.setName("Player 1");
	m_p2.setName("Player 2");
	m_p3.setName("Player 3");
	m_p4.setName("Player 4");

	m_players.push_back(m_p1); //need to push players after info is set
	m_players.push_back(m_p2);
	m_players.push_back(m_p3);
	m_players.push_back(m_p4);

	m_deck = new Deck();
}


Tester::~Tester()
{
	free(m_deck);
}

void Tester::displayHands() //display all players' hands
{
	for (auto &player : m_players) {
		player.displayHand();
	}
}

void Tester::test() 
{
	(*m_deck).createDeck();
	(*m_deck).shuffle();
	(*m_deck).deal(m_players);
	displayHands();

}




