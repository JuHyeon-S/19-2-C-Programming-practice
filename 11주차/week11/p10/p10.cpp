#include <iostream>
using namespace std;

class A {
public :
	A(int x) { cout << "������ A " << x << endl; }
};

class B : public A {
public :
	B() : A(20) { cout << "������ B" << endl; }
	B(int x) : A(20 + x){ cout << "������ B " << x << endl; }
};

int main() {
	B b;
	cout << endl;
	B b2(15);
}