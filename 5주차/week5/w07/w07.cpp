#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};
void Circle::setRadius(int radius) {
	this->radius = radius;
}
double Circle::getArea() {
	return radius * radius* 3.14;
}

int main() {
	Circle c[3];
	int r;
	int cnt = 0;
	for (int i = 0; i < sizeof(c) / sizeof(Circle); i++) {
		cout << "�� " << i+1 << "�� ������ >>";
		cin >> r;
		c[i].setRadius(r);
		if (c[i].getArea() > 100) {
			cnt++;
		}
	}
	cout << "������ 100���� ū ���� " << cnt << "�� �Դϴ�." << endl;
}