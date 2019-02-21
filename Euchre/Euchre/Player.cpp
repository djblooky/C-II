#include "stdafx.h"
#include "Player.h"
#include "Deck.h"


Player::Player()
{
	isDealer = false;
}


Player::~Player() 
{
	
}

void Player::addToHand(Card card)
{
	m_hand.push_back(card);
}

void Player::displayHand() {

	if (isDealer) {
		std::cout << "(Dealer) ";
	}
	std::cout << m_name << "'s hand: ";
	for (auto &card : m_hand) {
		std::cout << card.getName() << " of " << card.getSuit();

		Card *a = &card;
		Card *b = &m_hand.back();
		if (a != b) { //if not last card in hand
			std::cout << ", ";
		}
	}
	std::cout << std::endl;
}

void Player::rankHand(Deck &d)
{

	int strongCards = 0;
	for (auto &card : m_hand) {
		if (card.getName() == "Jack" && card.getColor() == d.getTrumpCard().getColor()) { //count jacks of trump color
			strongCards++;
		}
		else if (card.getSuit() == d.getTrumpCard().getSuit()) { //count other trump cards
			strongCards++;
		}
		
		if (strongCards >= 3) { //if hand has at least 3 strong cards
			d.setTrumpSuit(d.getTrumpCard().getSuit()); //set top card to trump suit
			d.setTrumpPicked(true);
			break;
		}

	}
}

void Player::setName(std::string name)
{
	m_name = name;
}

void Player::setDealer(bool d)
{
	isDealer = d;
}

bool Player::getDealer() 
{
	return isDealer;
}

std::string Player::getName()
{
	return m_name;
}
