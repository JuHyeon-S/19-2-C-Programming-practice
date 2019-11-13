#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person() { };
	Person(string name) { this->name = name; }
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};

class Family {
	Person* p;
	int size;
	string fname;
public:
	Family(string name, int size);
	void show();
	void setName(int arr, string name);
	~Family() { };
};

Family::Family(string name, int size) {
	this->size = size;
	p = new Person[size];
	this->fname = name;
}

void Family::show() {
	cout << fname << "가족은 다음과 같이" << size << "명 입니다." << endl;
	for (int i = 0; i < size; i++) {
		cout << p[i].getName() << "\t";
	}
}

void Family::setName(int arr, string name) {
	p[arr].setName(name);
}

int main() {
	Family* simpson = new Family("Simpson", 3);
	simpson->setName(0, "Mr. Simpson");
	simpson->setName(1, "Mrs. Simpson");
	simpson->setName(2, "Bart Simpson");
	simpson->show();
	delete simpson;
}