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
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> r;
		(p + i)->setCircle(name, r);
	}
}

void CircleManager::searchByName() {
	string name;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;
	for (int i = 0; i < size; i++) {
		if ((p + i)->getName() == name) {
			cout << name << "�� ������ " << (p + i)->getArea() << endl;
			return;
		}
	}
	cout << name << "�� �����ϴ�." << endl;
}

void CircleManager::searchByArea() {
	int area;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> area;
	cout << area << "���� ū ���� �˻��մϴ�." << endl;
	for (int i = 0; i < size; i++) {
		if ((p + i)->getArea() > area) {
			cout << (p + i)->getName() << "�� ������ " << (p + i)->getArea() << ", ";
		}
	}
}

CircleManager::~CircleManager() { }

int main() {
	int n;
	cout << "���� ���� >> ";
	cin >> n;

	CircleManager* cm = new CircleManager(n);

	cm->searchByName();
	cm->searchByArea();
}