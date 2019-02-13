#include "stdafx.h"
#include "Card.h"

Card::Card(std::string name, const int value, const int s)
{
	m_name = name;
	m_value = value;
	m_suit = static_cast<suit>(s); //sets card suit from number values
}

int Card::getValue()
{
	return m_value;
}

void Card::setValue(int value)
{
	m_value = value;
}

std::string Card::getName()
{
	return m_name;
}
