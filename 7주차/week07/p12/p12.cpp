#include <iostream>
using namespace std;
class a {
public:
	a();
	a(a &v);
};

int& big1(int a, int b) {
	if (a > b) return a;
	else return b;
}
int& big2(int& a, int& b) {
	if (a > b) return a;
	else return b;
}

int main() {
	int x = 1, y = 2;
	int& z = big1(x, y);
	z = 100;
	cout << &z << ' ' << x << ' ' << y << endl;

	int& w = big2(x, y);
	w = 100;
	cout << w << ' ' << x << ' ' << y << endl;
}