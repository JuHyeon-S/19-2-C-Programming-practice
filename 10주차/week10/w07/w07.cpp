#include <iostream>
using namespace std;

class Matrix {
	int arr[4];
public:
	Matrix() {}
	Matrix(int a, int b, int c, int d) {
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
		arr[3] = d;
	}
	void operator>>(int *a) {
		for (int i = 0; i < 4; i++) {
			a[i] = arr[i];
		}
	}

	void operator<<(int *b) {
		for (int i = 0; i < 4; i++) {
			arr[i] = b[i];
		}
	}

	void show() {
		cout << "Matrix = { ";
		for (int i = 0; i < 4; i++) {
			cout << arr[i] << " ";
		}
		cout << "}";
	}
};

int main() {
	Matrix a(4, 3, 2, 1), b;
	int x[4], y[4] = { 1,2,3,4 };
	a >> x;
	b << y;

	for (int i = 0; i < 4; i++) cout << x[i] << ' ';
	cout << endl;
	b.show();
}