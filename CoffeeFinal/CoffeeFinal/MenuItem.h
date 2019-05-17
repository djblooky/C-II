#pragma once
#include <string>

class MenuItem
{
private:
	std::string m_name;
	double m_cost;
public:
	MenuItem(std::string name, double cost);
	~MenuItem();

	std::string getName();

	double getCost();
	
};

