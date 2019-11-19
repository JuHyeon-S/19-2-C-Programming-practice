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
		cout << "����:1, ����:2, ��κ���:3, ����:4 >>";
		cin >> selectNum;
		return selectNum;
	}
	static int shapeN() {
		cout << "��:1, ��:2, �簢��:3 >>";
		cin >> shapeNum;
		return shapeNum;
	}
	static int deleteShape() {
		cout << "�����ϰ��� �ϴ� ������ �ε��� >>";
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
		cout << "�׷��� �������Դϴ�." << endl;

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