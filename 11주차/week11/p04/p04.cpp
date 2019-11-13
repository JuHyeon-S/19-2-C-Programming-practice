class A {
public: int w;
};
class B : public A{
public: int x;
};
class C  : private A{
public: int y;
};
class D : protected B{
public: int z;
};

int main() {
	A a;
	a.w = 10;

	B b;
	b.w = 10;

	C c;
	c.y = 10;

	D d;
	//d.w = 10;
}