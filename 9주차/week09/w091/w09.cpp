#include <iostream>
#include <string>
using namespace std;

class Board {
	static string* text;
	static int size;
public:
	static void add(string t);
	static void print();
};

int Board::size = 0;
string* Board::text = new string[100];

void Board::add(string t) {
	text[size++] = t;
}

void Board::print() {
	cout << "***************** �Խ����Դϴ�. *****************" << endl;
	for (int i = 0; i < size; i++) {
		cout << text[i] << endl;
	}
	cout << endl;
}

int main() {
	Board::add("�߰����� ���� ���� ���� ���� �Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}