class Exp {
	int exp = 1;
	int base = 1;
	int value = base;
public:
	Exp();
	Exp(int b);
	Exp(int b, int e);
	int getValue();
	int getBase();
	int getExp();
	bool equals(Exp b);
};