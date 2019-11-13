#include <iostream>
#include <string>
using namespace std;

class Integer {
	int integer;
public:
	Integer(int n) {
		integer = n;
	}
	Integer(string str) {
		integer = stoi(str);
	}
	int get() {
		return integer;
	}
	void set(int n) {
		integer = n;
	}
	int isEven() {
		if (integer % 2 == 0) return 1;
		else return 0;
	}
};

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven() << ' ';
}