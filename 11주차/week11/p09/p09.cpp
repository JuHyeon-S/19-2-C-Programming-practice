#include <iostream>
using namespace std;

class A {
public:
	A() { cout << "持失切 A" << endl; }
	A(int x) { cout << "持失切 A " << x << endl; }
};
class B : public A {
public :
	B() { cout << "持失切 B" << endl; }
	B(int x) { cout << "持失切 B " << x << endl; }
	B(int x, int y) : A(x + y + 2) { cout << "持失切 B " << x * y * 2 << endl; }
};

int main() {
	B b;
	cout << endl;
	B bc(10);
	cout << endl;
	B bd(10, 20);
}