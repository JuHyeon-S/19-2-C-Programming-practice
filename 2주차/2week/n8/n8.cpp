#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char name[5][100];
	char longname[100] = "\0";

	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���." << endl;
	for (int i = 0; i < sizeof(name) / sizeof(name[0]); i++) {
		cin.getline(name[i], 100, ';');
		if (strlen(name[i]) > strlen(longname)) {
			strcpy(longname, name[i]);
		}
	}
	for (int x = 0; x < sizeof(name)/sizeof(name[0]); x++) {
		cout << x+1 << " : " << name[x] << endl;
	}
	cout << "���� �� �̸��� " << longname;
}