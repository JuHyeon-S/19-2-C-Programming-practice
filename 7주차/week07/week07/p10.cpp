#include <iostream>
#include <string>
using namespace std;


int &f(int array[], int n) {
	return array[n];
}

int main() {
	int array[] = { 0,2,4,6,8,10,12,14,16,18 };

	//f(array,9) = 100;
	//for (int i = 0; i < 9; i++) f(array, i) = f(array, i) + 2;
	//int v = f(array, 0); v = 100;
	f(array, f(array, 2)) = 0;
	for (int i = 0; i < 10; i++) cout << array[i] << ' ';
}