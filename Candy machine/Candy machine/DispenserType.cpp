#include "DispenserType.h"

DispenserType::DispenserType() {
	NumberOfItems = 50;
	cost = 50;
}

DispenserType::DispenserType(int e_NumberOfItems, int e_cost) {
	NumberOfItems = e_NumberOfItems;
	cost = e_cost;
}

int DispenserType::getNoOfItems() {
	return NumberOfItems;
}

int DispenserType::getCost() {
	return cost;
}

void DispenserType::makeSale() {
	NumberOfItems-= 1;
}