#pragma once
#include "Card.h"

class Deck
{
private:
	Card *nine, *ten, *jack, *queen, *king, *joker;
public:
	Deck();
	~Deck();
};

