#include <iostream>
using namespace std;

class Rect {
	int width, height;
public:
	Rect(int w, int h) { width = w; height = h; }
	int getWidth() { return width;  }
	int getHeight() { return height; }
	int getArea();
};

int Rect::getArea() {
	return width * height;
}

int main() {
	Rect r(2, 3);
	Rect* p;
	p = &r;
	cout << "width : " << p->getWidth() << " height : " << p->getHeight() << endl;
}