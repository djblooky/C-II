#include "stdafx.h"
#include "Game.h"
#include <random>
#include <ctime>

Game::Game()
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

Game::~Game()
{
	free(m_deck);
}

void Game::displayHands() //display all players' hands
{
	for (auto &player : m_players) {
		player.displayHand();
	}
}

void Game::rankHands(Deck d)
{
	for (auto &player : m_players) {
		player.rankHand(d);
	}
}



void Game::pickDealer() //randomly assigns a dealer
{
	srand((unsigned int)time(NULL));
	int num = rand() % m_players.size();
	m_players[num].setDealer(true); 
}

void Game::game() 
{
	Deck deck = *m_deck;

	//while no one has won the game loop
		deck.createDeck();
		pickDealer();

	//while no one has won the round loop
		round(deck);
} 

void Game::round(Deck deck) //all the stuff that happens each round
{
	deck.shuffle();
	deck.deal(m_players);

	deck.getTrumpCard();
	displayHands();

}




