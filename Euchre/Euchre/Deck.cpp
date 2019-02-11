#include "stdafx.h"
#include "Deck.h"
#include "Card.h" //is this needed?

Deck::Deck()
{
   m_deck = new vector<Card>(); //heap allocated deck vector
   nine = new Card("Nine", 9);
   ten = new Card("Ten", 10);
   jack = new Card("Jack", 11);
   queen = new Card("Queen", );
   king = new Card("King", );
   joker = new Card("Joker", );
}


Deck::~Deck()
{
  delete m_deck; //this might be wrong
  delete nine;
  delete ten;
  delete jack;
  delete queen;
  delete king;
  delete joker;
}

void Deck::createDeck()
{
  for(short i = 0; i < 4; i++) { //add four of each card to the deck vector
    m_deck.push_back(nine);
    m_deck.push_back(ten);
    m_deck.push_back(jack);
    m_deck.push_back(queen);
    m_deck.push_back(king);
    m_deck.push_back(joker);
  }
}
