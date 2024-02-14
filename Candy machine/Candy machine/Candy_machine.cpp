#include <iostream>
#include "CashRegister.h"
#include "DispenserType.h"

void ShowSelection() {
	std::cout << "press 1 to select candies" << std::endl;
	std::cout << "press 2 to select chips" << std::endl;
	std::cout << "press 3 to select gum" << std::endl;
	std::cout << "press 4 to select cookies" << std::endl;
}

void SellProduct(DispenserType &product, CashRegister &CashOnHands) {
	int sum;
	std::cout << "Your product cost is " << product.getCost();
	std::cout << " Please enter your money ";
	std::cin >> sum;

	while (sum < product.getCost()){
		int b;
		std::cout << "deposit " << product.getCost() - sum << std::endl;
		std::cin >> b;
		sum += b;
	}

	if (sum == product.getCost()) {
		std::cout << " Thanks for your purchase ";
		CashOnHands.AcceptAmount(sum);
		product.makeSale();
	}

	if (sum > product.getCost()) {
		std::cout << " Thanks for your purchase ";
		CashOnHands.AcceptAmount(product.getCost());
		product.makeSale();
	}
}

int main() {
	DispenserType candies(500, 55);
	DispenserType chips;
	DispenserType gum(33, 45);
	DispenserType cookies;
	CashRegister CashOnHands(1000);
	int a;

	ShowSelection();
	std::cin >> a;

	if (a == 1) {
		SellProduct(candies, CashOnHands);
	}
	if (a == 2) {
		SellProduct(chips, CashOnHands);
	}
	if (a == 3) {
		SellProduct(gum, CashOnHands);
	}
	if (a == 4) {
		SellProduct(cookies, CashOnHands);
	}
	std::cout << std::endl << CashOnHands.getCurrentBalance();
	std::cout << std::endl << candies.getNoOfItems();
}