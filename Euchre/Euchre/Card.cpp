#include "pch.h"
#include "Card.h"

Card::Card(std::string name, const int value)
{
	m_name = name;
	m_value = value;
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
