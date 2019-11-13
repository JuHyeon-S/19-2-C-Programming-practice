#include <iostream>
using namespace std;

class Rect {
	int width, height;
public:
	Rect() { width = 1; height = 1; }
	Rect(int w, int h) { width = w; height = h; }
	int getWidth() { return width; }
	int getHeight() { return height; }
	int getArea();
};

int Rect::getArea() {
	return width * height;
}

int main() {
	Rect r[5] = { Rect(),Rect(2,3),Rect(3,4),Rect(4,5),Rect(5,6) };
	int sum = 0;
	for (int i = 0; i < sizeof(r) / sizeof(Rect); i++) {
		sum += r[i].getArea();
	}
	cout << "Area sum : " << sum << endl;
}