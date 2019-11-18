#include <iostream>
#include <string>
using namespace std;
#pragma warning(disable : 4996)

class Person {
	int id;
public :
	Person(int id = 0) { this->id = id; }
	virtual ~Person() { cout << "id=" << id << endl; }
};

class Student : public Person {
	char *name;
public:
	Student(int id, const char *name) : Person(id) {
		int len = strlen(name);
		this->name = new char[len + 1];
		strcpy(this->name, name);
	}
	virtual ~Student() {
		cout << "name=" << name << endl;
		delete[] name;
	}
};

int main() {
	Person *p = new Student(10, "¼Õ¿¬Àç");
	delete p;
	system("pause");
}