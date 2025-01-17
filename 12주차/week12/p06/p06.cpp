#include <iostream>
#include <string>
using namespace std;

class A {
public:
	void func() { f(); }
	virtual void f() { cout << "A::f() called" << endl; }
};

class B : public A {
public:
	void f() { cout << "B::f() called" << endl; }
};

class C : public B {
public:
	void f() { cout << "C::f() called" << endl; }
};

int main() {
	C c;
	c.f();

	A *pa;
	B*pb;
	pa = pb = &c;
	pb->f();
	pa->f();
	pa->func();

	system("pause");
}