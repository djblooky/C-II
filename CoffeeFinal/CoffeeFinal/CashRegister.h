#pragma once
class CashRegister
{
private:
	double moneyInRegister;
public:
	CashRegister();
	~CashRegister();
	double MakeChange();
};

