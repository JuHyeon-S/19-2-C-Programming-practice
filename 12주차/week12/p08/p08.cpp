#include <iostream>
#include <string>
using namespace std;

void f() {
	cout << "f() called" << endl; 
}

class A {
public:
	virtual void f() { cout << "A::f() called" << endl; }
};

class B : public A {
public:
	void g() { A::f(); }
	void f() { cout << "B::f() called" << endl; }
};

int main() {
	B b;
	b.g();
	system("pause");
}