#include <iostream>
#include <string>
using namespace std;


class Student;
class Professor;

class Student {
	int id;
public:
	Student(int id) { this->id = id; }
	friend void show(Student s, Professor p);
};

class Professor {
	string name;
public:
	Professor(string name) { this->name = name; }
	friend void show(Student s, Professor p);
};

void show(Student s, Professor p) {
	cout << s.id << p.name;
}
