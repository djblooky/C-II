#include "stdafx.h"
#include "Player.h"


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

void Player::setName(std::string name)
{
	m_name = name;
}

void Player::setDealer(bool d)
{
	isDealer = d;
}
