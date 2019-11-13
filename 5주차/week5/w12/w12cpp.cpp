#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};

class CircleManager {
	Circle* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
};

void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}
double Circle::getArea() { return radius*radius*3.14; }
string Circle::getName() { return name; }

CircleManager::CircleManager(int size) {
	string name;
	int r;
	p = new Circle[size];
	this->size = size;

	for (int i = 0; i < size; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> r;
		(p + i)->setCircle(name, r);
	}
}

void CircleManager::searchByName() {
	string name;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if ((p + i)->getName() == name) {
			cout << name << "의 면적은 " << (p + i)->getArea() << endl;
			return;
		}
	}
	cout << name << "이 없습니다." << endl;
}

void CircleManager::searchByArea() {
	int area;
	cout << "최소 면적을 점수로 입력하세요 >> ";
	cin >> area;
	cout << area << "보다 큰 원을 검색합니다." << endl;
	for (int i = 0; i < size; i++) {
		if ((p + i)->getArea() > area) {
			cout << (p + i)->getName() << "의 면적은 " << (p + i)->getArea() << ", ";
		}
	}
}

CircleManager::~CircleManager() { }

int main() {
	int n;
	cout << "원의 개수 >> ";
	cin >> n;

	CircleManager* cm = new CircleManager(n);

	cm->searchByName();
	cm->searchByArea();
}