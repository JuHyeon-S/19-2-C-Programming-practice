#include <iostream>
#include <cstring>

using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14* radius* radius; }
};
Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}
void a() {
	Circle* pArray = new Circle[3];

	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);
	
	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getArea() << endl;
	}

	Circle* p = pArray;
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << endl;
		p++;
	}
	delete[] pArray;
}

void b() {
	Circle* p[3];
	int r;
	int size = sizeof(p) / sizeof(Circle);

	for (int i = 0; i < size; i++) {
		cout << "> radius : ";
		cin >> r;
		p[i] = new Circle(r);
	}
	for (int i = 0; i < size; i++) {
		cout << (*(p + i))->getArea() << endl;
	}
	for (int i = 0; i < size; i++) {
		delete p[i];
	}
}

class Dog {
	string *name;
	int* age;
public:
	Dog(string n, int a) {
		name = new string(n);
		age = new int(a);
	}
	~Dog() {
		delete name;
		delete age;
	}
	int getAge() { return *age; }
	void setAge(int a) { *age = a; }
};

void c() {
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1, n = 2;
	int& refn = n; // 참조 변수 refn 선언. refn은 n에 대한 별명
	n = 4;
	refn++; // refn=5, n=5
	cout << i << '\t' << n << '\t' << refn << endl;

	refn = i; // refn=1, n=1
	refn++; // refn=2, n=2
	cout << i << '\t' << n << '\t' << refn << endl;

	int* p = &refn; // p는 refn의 주소를 가짐. 실제 p는 n의 주소를 가짐
	*p = 20; // refn=20, n=20
	cout << i << '\t' << n << '\t' << refn << endl;
}
int main() {
	//a();
	//b();
	c();
}