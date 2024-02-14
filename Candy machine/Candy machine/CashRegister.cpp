#include "CashRegister.h"

CashRegister::CashRegister() {
	CashRegister::CashOnHand = 500;
}

CashRegister::CashRegister(int e_a) {
	CashRegister::CashOnHand = e_a;
}

int CashRegister::getCurrentBalance() {
	return CashRegister::CashOnHand;
}

void CashRegister::AcceptAmount(int amount) {
	CashRegister::CashOnHand += amount;
}