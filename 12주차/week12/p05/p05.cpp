#include <iostream>
#include <string>
using namespace std;

class Base {
public :
	void func() { f(); }
	void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base {
public :
	void f() { cout << "Derived::f() called" << endl; }
};

int main() {
	Derived der;
	der.f();

	Base base;
	Base *p = &base;
	p->f();
	p = &der;
	p->f();
	p->func();

	system("pause");
}