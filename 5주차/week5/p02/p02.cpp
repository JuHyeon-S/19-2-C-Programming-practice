#include <iostream>
using namespace std;

class Rect {
	int width, height;
public:
	Rect(int w, int h) { width = w; height = h; }
	int getWidth() { return width; }
	int getHeight() { return height; }
	int getArea();
};

int Rect::getArea() {
	return width * height;
}

int main() {
	Rect* q;
	int w, h;
	cin >> w >> h;
	q = new Rect(w, h);
	cout << "Area : " << q->getArea() << endl;
	delete q;
}