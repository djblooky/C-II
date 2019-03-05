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
	//assign teams
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

std::string getRandomSuit() {
	srand((unsigned int)time(NULL));
	int num = rand() % 3; //random range 0-2
	card::suit suit = static_cast<card::suit>(num); //assign suit
	Card card;
	card.setSuit(suit);
	std::string suitString = card.getSuit();

	return suitString;
}

void Game::rankHands(Deck &d)
{
	for (auto &player : m_players) {
		player.rankHand(d);

		if (d.getTrumpPicked()) { //if trump is picked stop rotaion and the play begins
			pickedTrump = player; //player that picked the trump
			break;
		}
		else { //no players had a strong hand
			if (player.getDealer()) {
				pickedTrump = player;
				pickedTrump.setName("No players");
			}
			   //randomly set the trump suit to fit the dealers hand best
			d.setTrumpSuit(getRandomSuit());
		}
	}
}

void Game::pickDealer() //randomly assigns a dealer
{
	srand((unsigned int)time(NULL));
	int num = rand() % m_players.size();
	Player dealer = m_players[num];
	dealer.setDealer(true); 

	//this ensures the dealer will be at the end of the rotation
	m_players.erase(m_players.begin() + num); //remove dealer from players vector
	m_players.push_back(dealer); //add dealer back to the end of the vector
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

	deck.setTrumpCard();
	//displayHands();

	rankHands(deck); //determines trump card
	//deck.getTrumpSuit(); 

	//display the player that chose the trump card and the suit itself
	std::cout << pickedTrump.getName() << " picked the trump suit. " << deck.getTrumpSuit() << "!" << std::endl;

	//while players still have cards
	{
		wholeUp();
		turns();
	}
}

void Game::wholeUp() 
{
	for (auto &player : m_players) {
		if (player.isDealer()) {
			turnEngine.wholeUp(player, *m_deck);
		}
	}
}

void Game::turns() 
{
	for (auto &player : m_players) {
		turnEngine.playHand(player, *m_deck);
	}
}




