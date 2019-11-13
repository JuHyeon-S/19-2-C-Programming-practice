#include <iostream>
#include <string>
using namespace std;

class Overloading {
public:
	Overloading(int x = 0) { cout << x; }
	Overloading(int x, string b) { cout << x << b; }
};

int main() {
	//Overloading a;
	//Overloading b(3);
	Overloading c(5, "hello");
	system("pause");
}