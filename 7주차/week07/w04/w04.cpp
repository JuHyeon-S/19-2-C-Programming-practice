#include <iostream>
using namespace std;

bool bigger(int a, int b, int& big) {
	if (a == b) return true;

	if (a > b) big = a;
	else big = b;

	return false;
}

int main() {
	int x, y, big;
	bool b;
	cout << "두 정수를 입력 하세요. >> ";
	cin >> x >> y;
	b = bigger(x, y, big);
	if (b) cout << "두 정수가 같습니다.";
	else cout << "큰 수는 " << big;
}