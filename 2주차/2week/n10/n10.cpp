#include <iostream>

using namespace std;

int main() {
	char str[100];

	cout << "���ڿ� �Է� >>";
	cin.getline(str, 100);

	for (int i = 0; i < strlen(str); i++) {
		for (int x = 0; x <= i; x++) {
			cout << str[x];
		}
		cout << endl;
	}
}