#include "stdafx.h"
#include "Deck.h"
#include <random>
#include <ctime>

Deck::Deck()
{
   m_deck = new std::vector<Card*>(); //heap allocated deck vector with cards allocated on the heap
   eight = new Card("Eight", 1);
   nine = new Card("Nine", 1);
   ten = new Card("Ten", 1); //values dont matter yet
   jack = new Card("Jack", 1);
   queen = new Card("Queen", 1);
   king = new Card("King", 1);
   ace = new Card("Ace", 1);

   isShuffled = false;
}


Deck::~Deck()
{	
  delete m_deck; //this might be wrong
  delete eight;
  delete nine;
  delete ten;
  delete jack;
  delete queen;
  delete king;
  delete ace;
}

void Deck::createDeck()
{
  for(int i = 0; i < 4; i++) { //add four of each card to the deck vector
	m_deck->push_back(eight);
	m_deck->push_back(nine);
    m_deck->push_back(ten);
    m_deck->push_back(jack);
    m_deck->push_back(queen);
    m_deck->push_back(king);
    m_deck->push_back(ace);
  }
}

void Deck::deal(std::vector<Player>& players) //five cards to each player
{
	if (isShuffled) { //if not shuffled, won't deal

	}
	else {
		std::cout << "Cannot deal until deck is shuffled" << std::endl;
	}
}

void Deck::shuffle() //must be shuffled in order to be dealt
{
	srand(time(NULL));
	std::random_shuffle(m_deck->begin, m_deck->end);
	isShuffled = true;
}
