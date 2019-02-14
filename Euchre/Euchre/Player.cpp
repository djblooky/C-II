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
	std::cout << m_name << "'s hand: ";
	for (auto &card : m_hand) {
		std::cout << card.getName() << " ";
	}
	std::cout << std::endl;
}

void Player::setName(std::string name)
{
	m_name = name;
}
