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
		cout << "----- 모든 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0; i < num; i++) {
			cout << tag[i] << ":" << info[i] << endl;
		}
	}
	else {
		cout << "----- " << t << "태그의 Trace 정보를 출력합니다. -----" << endl;
		for (int i = 0; i < num; i++) {
			if (tag[i] == t) {
				cout << tag[i] << ":" << info[i] << endl;
			}
		}
	}
}

void f() {
	int a, b, c;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a + b;
	Trace::put("f()", "합 계산");
	cout << "합은 " << c << endl;
}

int main() {
	Trace::put("main()", "프로그램 시작합니다.");
	f();
	Trace::put("main()", "종료");

	Trace::print("f()");
	Trace::print();
}