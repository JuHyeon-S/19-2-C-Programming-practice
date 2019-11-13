#include <iostream>
#include <string>
using namespace std;

void square(int n[], int size) {
	for (int i = 0; i < size; i++) n[i] = n[i] * n[i];
}

int main() {
	int m[3] = { 1,2,3 };
	square(m, 3);
	for (int i = 0; i < 3; i++) cout << m[i] << ' ';
}