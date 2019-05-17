#pragma once
#include <vector>
#include "CashRegister.h"
#include "MenuItem.h"

class CoffeeShop
{
private:
	CashRegister m_cashRegister;
	std::vector<MenuItem> m_menu;
public:
	CoffeeShop();
	~CoffeeShop();
	void displayMenu();
	void createInventory();
	void addToMenu(MenuItem item);
};

