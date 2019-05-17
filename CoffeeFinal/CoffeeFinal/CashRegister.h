#include "MenuItem.h"

#pragma once
class CashRegister
{
private:
	double moneyInRegister;
public:
	CashRegister();
	~CashRegister();
	double MakeChange(int paymentAmount, MenuItem item);
};

