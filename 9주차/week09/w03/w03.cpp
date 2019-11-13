#include <iostream>
#include <string>
using namespace std;

int big(int a, int b) {
	int big;
	if (a < b) big = b;
	else big = a;
	if (big < 100) return big;
	return 100;
}

int big(int a, int b, int c) {
	int big;
	if (a < b) big = b;
	else big = a;
	if (big < c) return big;
	return c;
}

int main() {
	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	cout << x << ' ' << y << ' ' << z << endl;

	system("pause");
}