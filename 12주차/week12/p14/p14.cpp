#include <iostream>
#include <string>
using namespace std;

class Shape {
public :
	virtual void paint() { draw(); }
	virtual void draw() = 0;
};

class Circle : public Shape {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	double getArea() { return 3.14*radius*radius; }
	void draw() { cout << "반지름=" << radius << "인 원"; }
};

int main() {
	/*
	Shape shape;
	Shape *p;
	Circle circle(10);
	Circle *pCircle;
	*/
	Circle *p = new Circle(10);
	p->paint();
}