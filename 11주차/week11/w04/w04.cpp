#include <iostream>
#include <string>
using namespace std;

class Point {
public:
	int pointX;
	int pointY;

	void setPoint(int x, int y) {
		pointX = x;
		pointY = y;
	}
};

class ColorPoint : public Point {
	string color;
public:
	ColorPoint() {
		color = "BLACK";
		setPoint(0, 0);
	}
	ColorPoint(int x, int y) {
		setPoint(x, y);
	}
	void setColor(string c) {
		color = c;
	}
	void show() {
		cout << color << "색으로 (" << pointX << ", " << pointY << ")에 위치한 점입니다." << endl;
	}
};

int main() {
	ColorPoint zeroPoint;
	zeroPoint.show();

	ColorPoint cp(5, 5);
	cp.setPoint(10, 20);
	cp.setColor("BLUE");
	cp.show();
}