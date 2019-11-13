#include <iostream>
using namespace std;

class Student {
	int id;
public:
	Student(int id) { this->id = id;  }
	friend bool isValid(Student s);
};
bool isValid(Student s) {
	if (s.id > 0) return true;
	else return false;
}