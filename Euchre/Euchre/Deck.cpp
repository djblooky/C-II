#include "stdafx.h"
#include "Deck.h"
#include <random>
#include <ctime>
#include <algorithm>



Deck::Deck()
{
   isShuffled = false;
   trumpPicked = false;
}


Deck::~Deck()
{	
	
}

void Deck::createDeck() 
{
	 //suit values are set later
	 	 
	Card jack("Jack", 1, 0);
	Card ace("Ace", 2, 0);
	Card king("King", 3, 0);
	Card queen("Queen", 4, 0);
	Card ten("Ten", 5, 0);
	Card nine("Nine", 6, 0);
	Card eight("Eight", 7, 0);

  for(int i = 0; i < 4; i++) { //add four of each cards of each suit to the deck vector
	
	eight.setSuit(i); //setSuit switches through suit enum to set the suit string
	nine.setSuit(i);
	ten.setSuit(i);
	jack.setSuit(i);
	queen.setSuit(i);
	king.setSuit(i);
	ace.setSuit(i);

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

//using &player instead of just player ensures that it doesn't add the cards to copies of the player, but the actual player

void Deck::deal(Player &player, const int numOfCards) //deal specified number of cards to one player
{
	for (int i = 0; i < numOfCards; i++) {
		Card card = m_deck.back(); //grabs card on top of deck
		player.addToHand(card); //add last card to player.m_hand
		m_deck.pop_back(); //remove last card from m_deck
	}
}

void Deck::shuffle() //must be shuffled in order to be dealt
{
	srand((unsigned int)time(NULL));
	std::random_shuffle(m_deck.begin(), m_deck.end());
	isShuffled = true;
}

void Deck::setTrumpCard() 
{
	trumpCard = m_deck.back(); //top card in the deck is trump
	//make this "display" as face up?
}

void Deck::setTrumpSuit(std::string suit)
{
	trumpSuit = suit;
}

void Deck::setTrumpPicked(bool isPicked)
{
	trumpPicked = isPicked;
}

bool Deck::getTrumpPicked()
{
	return trumpPicked;
}

Card Deck::getTrumpCard()
{
	return trumpCard;
}

std::string Deck::getTrumpSuit()
{
	return "The trump suit is: " + trumpSuit;
}

Card Deck::getTopCard() 
{
	return m_deck.back();
}

void Deck::removeCard(Card card)
{
	Card *a = &card;
	Card *b;

	for (int i = 0; i < m_deck.size(); i++) { //for every card in deck
		b = &m_deck[i]; //get card at current index
		if (b == a) { //if card matches
			m_deck.erase(m_deck.begin() + i); //remove it by index
			break;
		}
	}
}



