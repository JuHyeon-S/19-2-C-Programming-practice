#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person();
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel);
};

Person::Person() { }

void Person::set(string name, string tel) {
	this->name = name;
	this->tel = tel;
}

int main() {
	string set[2];
	Person p[3];
	string find;

	for (int i = 0; i < 3; i++) {
		cout << "��� " << i + 1 << ">> ";
		for (int j = 0; j < sizeof(set) / sizeof(string); j++) {
			cin >> set[j];
		}
		p[i].set(set[0], set[1]);
	}
	cout << "��� ����� �̸��� ";
	for (int n = 0; n < sizeof(p) / sizeof(Person); n++) {
		cout << p[n].getName() << " ";
	}

	cout << "\n��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";;
	cin >> find;

	for (int m = 0; m < sizeof(p) / sizeof(Person); m++) {
		if (find == p[m].getName()) {
			cout << "��ȭ��ȣ�� " << p[m].getTel();
			break;
		}
	}
}