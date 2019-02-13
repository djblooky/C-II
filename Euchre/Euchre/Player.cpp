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
	m_hand.push_back(&card);
}
