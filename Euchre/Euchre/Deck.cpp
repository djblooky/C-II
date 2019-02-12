#include "stdafx.h"
#include "Deck.h"
#include <random>
#include <ctime>

Deck::Deck()
{
   m_deck = new std::vector<Card>(); //heap allocated deck vector
   eight = new Card('a', 8); //this wants a char???
   nine = new Card("Nine", 9);
   ten = new Card("Ten", 10);
   jack = new Card("Jack", 11);
   queen = new Card("Queen", );
   king = new Card("King", );
   ace = new Card("Ace", );
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
	(*m_deck).push_back(&eight);
	(*m_deck).push_back(nine);
    m_deck.push_back(&ten);
    m_deck->push_back(jack);
    m_deck->push_back(queen);
    m_deck.push_back(king);
    m_deck.push_back(ace);
  }
}

void Deck::deal(std::vector<Player>& players)
{
}

void Deck::shuffle() //must be shuffled in order to be dealt
{
	srand(time(NULL));
	std::random_shuffle(m_deck.begin(), m_deck.end());
}
