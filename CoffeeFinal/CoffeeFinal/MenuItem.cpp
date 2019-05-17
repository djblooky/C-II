#include "pch.h"
#include "MenuItem.h"


MenuItem::MenuItem(std::string name, double cost)
{
	m_name = name;
	m_cost = cost;
}


MenuItem::~MenuItem()
{
}

std::string MenuItem::getName() 
{
	return m_name;
}

double MenuItem::getCost() 
{
	return m_cost;
}
