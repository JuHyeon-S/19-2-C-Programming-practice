#include <iostream>
using namespace std;

class Stack {
	int *stk;
	int cnt;
public:
	Stack() {
		stk = new int[10];
		cnt = 0;
	}
	bool operator!() {
		if (cnt == 0) return true;
		return false;
	}
	Stack& operator<<(int n) {
		stk[cnt] = n;
		cnt++;
		return *this;
	}
	Stack& operator>>(int& n) {
		cnt--;
		n = stk[cnt];
		return *this;
	}
};

int main() {
	Stack stack;;
	stack << 3 << 5 << 10;
	while (true) {
		if (!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}