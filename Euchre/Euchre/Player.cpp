#include "stdafx.h"
#include "Player.h"


Player::Player()
{
	isDealer = false;
}


Player::~Player() 
{
	for (auto &card : m_hand) { //free every card in player's hand
		free(card);
	}
}

void Player::addToHand(Card *card)
{
	m_hand.push_back(card);
}

void Player::displayHand() {
	std::cout << m_name << "'s hand: ";
	for (auto &card : m_hand) {
		std::cout << (*card).getName() << " ";
	}
	std::cout << std::endl;
}
