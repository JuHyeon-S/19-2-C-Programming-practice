#include <iostream>
#include <string>
using namespace std;

class LoopAdder {
	int start,fin;
	int sum = 0;
	string loop;
public :
	LoopAdder(string str) { loop = str; }
	virtual int calculate() = 0;
	void run() {
		cout << loop << " Loop:" << endl;
		cout << "ó�� ������ �ι�° ������ ���մϴ�. �� ���� �Է��ϼ��� >> ";
		cin >> start >> fin;
		sum = calculate();
		cout << start << "���� " << fin << "������ �� = " << sum << " �Դϴ�" << endl;
	}
	int getStart() { return start; }
	int getFin() { return fin; }
};

class WhileLoopAdder : public LoopAdder{
public :
	WhileLoopAdder(string str) : LoopAdder(str) { }

	int calculate() {
		int st = getStart();
		int fin = getFin();
		int i = st;
		int sum = 0;
		while (i != fin+1) {
			sum += i++;
		}
		return sum;
	}

};

class DoWhileLoopAdder : public LoopAdder {
public:
	DoWhileLoopAdder(string str) : LoopAdder(str) { }

	int calculate() {
		int st = getStart();
		int fin = getFin();
		int i = st;
		int sum = 0;
		do {
			sum += i++;
		} while (i != fin+1);
		return sum;
	}
};

int main() {
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do while Loop");

	whileLoop.run();
	doWhileLoop.run();
}