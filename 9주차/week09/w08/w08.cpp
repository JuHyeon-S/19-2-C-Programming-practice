#include <iostream>
#include <string>
using namespace std;

class Trace {
	static string* tag;
	static string* info;
	static int num;
public:
	static void put(string t, string i);
	static void print(string t);
};

string* Trace::tag = new string[100];
string* Trace::info = new string[100];
int Trace::num = 0;

void Trace::put(string t, string i) {
	tag[num] = t;
	info[num] = i;
	num++;
}

void Trace::print(string t = "all") {
	if (t == "all") {
		cout << "----- ��� Trace ������ ����մϴ�. -----" << endl;
		for (int i = 0; i < num; i++) {
			cout << tag[i] << ":" << info[i] << endl;
		}
	}
	else {
		cout << "----- " << t << "�±��� Trace ������ ����մϴ�. -----" << endl;
		for (int i = 0; i < num; i++) {
			if (tag[i] == t) {
				cout << tag[i] << ":" << info[i] << endl;
			}
		}
	}
}

void f() {
	int a, b, c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a + b;
	Trace::put("f()", "�� ���");
	cout << "���� " << c << endl;
}

int main() {
	Trace::put("main()", "���α׷� �����մϴ�.");
	f();
	Trace::put("main()", "����");

	Trace::print("f()");
	Trace::print();
}