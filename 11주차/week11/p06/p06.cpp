class A {
	int x;
public:
	void setX(int x) { this->x = x; }
};

class B : protected A {
	int y;
public:
	void setXY(int x, int y) {
		setX(x); this->y = y;
	}
};

int main() {
	A a;
	B b;
	a.x = 3;
	b.y = 3;
	a.setX(5);
	b.setX(5);
}