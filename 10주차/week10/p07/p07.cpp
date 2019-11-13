#include <iostream>
#include <string>
using namespace std;

class Food {
	int price;
	string name;
public:
	Food(string name, int price);
	void buy();
};
class Person {
	int id;
public:
	friend void shopping(Food food) {
		if (food.price < 1000)
			food.buy;
	}
	int get() { return id; }
};