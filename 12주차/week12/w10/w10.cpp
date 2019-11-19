#include <iostream>
#include <string>
using namespace std;

class Shape {
	Shape* next;
protected :
	virtual void draw() {
		cout << "--Shape--" << endl;
	}
public:
	Shape() { next = NULL; }
	virtual ~Shape() { }
	void paint() {
		draw();
	}
	Shape* add(Shape* p) {
		this->next = p;
		return p;
	}
	Shape* getNext() { return next; }
};

class Circle : public Shape {
protected :
	virtual void draw() {
		cout << "Circle" << endl;
	}
};

class Line : public Shape {
protected:
	virtual void draw() {
		cout << "Line" << endl;
	}
};

class Rect : public Shape {
protected:
	virtual void draw() {
		cout << "Rectangle" << endl;
	}
};

class UI {
	static int selectNum;
	static int shapeNum;
	static int deleteNum;
public:
	static int select() {
		cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >>";
		cin >> selectNum;
		return selectNum;
	}
	static int shapeN() {
		cout << "선:1, 원:2, 사각형:3 >>";
		cin >> shapeNum;
		return shapeNum;
	}
	static int deleteShape() {
		cout << "삭제하고자 하는 도형의 인덱스 >>";
		cin >> deleteNum;
		return deleteNum;
	}
};


class GraphicEditor {
	Shape* pStart;
	Shape* pLast;
	int cnt = 0;
public :
	GraphicEditor() { }
	void call() {
		cout << "그래픽 에디터입니다." << endl;

		switch (UI::select())
		{
		case 1:
			create(UI::shapeN());
			break;
		case 2:
			delShape(UI::deleteShape());
			break;
		}
	}

	void create(int n) {
		switch (n)
		{
		case 1:
			if (cnt == 0) {
				pStart = new Line();
				pLast = pStart;
			}
			else
				pLast = pLast->add(new Line());
			cnt++;
			break;
		case 2:
			if (cnt == 0) {
				pStart = new Circle();
				pLast = pStart;
			}
			else
				pLast = pLast->add(new Circle());
			cnt++;
			break;
		case 3:
			if (cnt == 0) {
				pStart = new Rect();
				pLast = pStart;
			}
			else
				pLast = pLast->add(new Rect());
			cnt++;
			break;
		}
	}

	void delShape(int n) {

	}
};