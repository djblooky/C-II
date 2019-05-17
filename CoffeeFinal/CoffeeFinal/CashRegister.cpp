#include "pch.h"
#include "CashRegister.h"
#include "MenuItem.h"

CashRegister::CashRegister()
{
	moneyInRegister = 500;
}


CashRegister::~CashRegister()
{
}

double CashRegister::MakeChange(int paymentAmount, double cost) //user pays in whole dollar amounts
{
	double change = 0;

	moneyInRegister += paymentAmount;

	while (paymentAmount - cost > 0) { //while enough change hasn't been made
		if (paymentAmount >= 20) {
			paymentAmount -= 20;
			change += 20;
		}
		else if (paymentAmount >= 10) {
			paymentAmount -= 10;
			change += 10;
		}
		else if (paymentAmount >= 5) {
			paymentAmount -= 5;
			change += 5;
		}
		else if (paymentAmount >= 1) {
			paymentAmount -= 1;
			change += 1;
		}
		else if (paymentAmount >= 0.25) {
			paymentAmount -= .25;
			change += .25;
		}
		else if (paymentAmount >= 0.10) {
			paymentAmount -= .10;
			change += .10;
		}
		else if (paymentAmount >= 0.05) {
			paymentAmount -= .05;
			change += .05;
		}
		else if (paymentAmount >= 0.01) {
			paymentAmount -= .01;
			change += .01;
		}	
	}

	moneyInRegister -= change;

	return change;
}
