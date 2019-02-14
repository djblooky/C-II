#include "stdafx.h"
#include "Deck.h"
#include <random>
#include <ctime>

Deck::Deck()
{
   isShuffled = false;
}


Deck::~Deck()
{	
	
}

void Deck::createDeck()
{
	Card eight("Eight", 1, 0);
	Card nine("Nine", 1, 0);
	Card ten("Ten", 1, 0); //values dont matter yet
	Card jack("Jack", 1, 0);
	Card queen("Queen", 1, 0);
	Card king("King", 1, 0);
	Card ace("Ace", 1, 0);

  for(int i = 0; i < 4; i++) { //add four of each card to the deck vector
	m_deck.push_back(eight);
	m_deck.push_back(nine);
    m_deck.push_back(ten);
    m_deck.push_back(jack);
    m_deck.push_back(queen);
    m_deck.push_back(king);
    m_deck.push_back(ace);
  }
}

void Deck::deal(std::vector<Player>& players) //deal rotation
{
	if (isShuffled) { //if not shuffled, won't deal
		
		int pass = 1, cards = 3;
		while (pass <= 2) { //2 deal passes
			for (auto &player : players) { //for each player, deal them in
				deal(player, cards);
			}
			cards = 2; //after 1st pass deals 2 cards
			pass++;
		}
	}
	else {
		std::cout << "Cannot deal until deck is shuffled" << std::endl;
	}
}

void Deck::deal(Player player, const int numOfCards) //deal specified number of cards to one player
{
	for (int i = 0; i < numOfCards; i++) {
		Card card = m_deck.back(); //grabs card on top of deck
		player.addToHand(card); //add last card to player.m_hand
		m_deck.pop_back(); //remove last card from m_deck
	}
}

void Deck::shuffle() //must be shuffled in order to be dealt
{
	srand(time(NULL));
	std::random_shuffle(m_deck.begin(), m_deck.end());
	isShuffled = true;
}

