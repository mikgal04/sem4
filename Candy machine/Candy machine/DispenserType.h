class DispenserType
{
private:
	int NumberOfItems, cost;
public:

	DispenserType();
	DispenserType(int NumberOfItems, int cost);
	int getNoOfItems();
	int getCost();
	void makeSale();
};