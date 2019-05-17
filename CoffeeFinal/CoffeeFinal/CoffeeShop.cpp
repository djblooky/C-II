#include "pch.h"
#include "CoffeeShop.h"
#include "CashRegister.h"
#include <iostream>

CoffeeShop::CoffeeShop()
{
	createInventory();
	displayMenu();
}


CoffeeShop::~CoffeeShop()
{

}

void CoffeeShop::displayMenu()
{
	for (auto &item : m_menu) {
		std::cout << item.getName() << " | $" << item.getCost() << std::endl;
	}
}

void CoffeeShop::createInventory()
{
	MenuItem coffee("Coffee", 1.00);
	addToMenu(coffee);
	MenuItem latte("Latte", 2.55);
	addToMenu(latte);
	MenuItem eggSandwich("Egg Sandwich", 3.75);
	addToMenu(eggSandwich);
	MenuItem donut("Donut", 3.22);
	addToMenu(donut);
}

void CoffeeShop::addToMenu(MenuItem item) 
{
	m_menu.push_back(item);
}

void CoffeeShop::sellItem(int payment, MenuItem item) 
{
	m_cashRegister.MakeChange(payment, item.getCost());
}

void CoffeeShop::TakeOrder(int payment, std::vector<MenuItem> items) 
{
	for (auto &item : items) {
		sellItem(payment, item);
	}
}
