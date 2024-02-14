class CashRegister
{
private:

	int CashOnHand;

public:

	CashRegister();
	CashRegister(int e_a);
	int getCurrentBalance();
	void AcceptAmount(int amount);
};