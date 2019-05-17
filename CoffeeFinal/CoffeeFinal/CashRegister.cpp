#include "pch.h"
#include "CashRegister.h"
#include "MenuItem.h"

CashRegister::CashRegister()
{
}


CashRegister::~CashRegister()
{
}

double CashRegister::MakeChange(int paymentAmount, MenuItem item) //user pays in whole dollar amounts
{
	double change = 0;

	while (paymentAmount - item.getCost() > 0) { //while enough change hasn't been made
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

	return change;
}
