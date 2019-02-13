#include "stdafx.h"
#include "Deck.h"
#include <random>
#include <ctime>

Deck::Deck()
{
   //m_deck = new std::vector<Card*>(); //heap allocated deck vector with cards allocated on the heap
   eight = new Card("Eight", 1, 0);
   nine = new Card("Nine", 1, 0);
   ten = new Card("Ten", 1, 0); //values dont matter yet
   jack = new Card("Jack", 1, 0);
   queen = new Card("Queen", 1, 0);
   king = new Card("King", 1, 0);
   ace = new Card("Ace", 1, 0);

   isShuffled = false;
}


Deck::~Deck()
{	
	//for each card in m_deck delete that card

  delete &m_deck; 
}

void Deck::createDeck()
{
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

void Deck::deal(std::vector<Player>& players) //five cards to each player
{
	if (isShuffled) { //if not shuffled, won't deal
		for (auto &player : players) { //for each player, deal them 5 cards
			deal(player, 5);
		}
	}
	else {
		std::cout << "Cannot deal until deck is shuffled" << std::endl;
	}
}

void Deck::deal(Player player, const int numOfCards) //deal specified number of cards to one player
{
	for (int i = 0; i < numOfCards; i++) {
		Card *card = m_deck.back(); //grabs card on top of deck
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

