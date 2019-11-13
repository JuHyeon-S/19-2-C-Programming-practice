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
	cout << "***************** 게시판입니다. *****************" << endl;
	for (int i = 0; i < size; i++) {
		cout << text[i] << endl;
	}
	cout << endl;
}

int main() {
	Board::add("중간고사는 감독 없는 자율 시험 입니다.");
	Board::add("코딩 라운지 많이 이용해 주세요.");
	Board::print();
	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();
}