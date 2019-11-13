#include <iostream>
using namespace std;

class A {
public:
	A() { cout << "������ A" << endl; }
	A(int x) { cout << "������ A " << x << endl; }
};
class B : public A {
public :
	B() { cout << "������ B" << endl; }
	B(int x) { cout << "������ B " << x << endl; }
	B(int x, int y) : A(x + y + 2) { cout << "������ B " << x * y * 2 << endl; }
};

int main() {
	B b;
	cout << endl;
	B bc(10);
	cout << endl;
	B bd(10, 20);
}