#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char name[5][100];
	char longname[100] = "\0";

	cout << "5명의 이름을 ';'으로 구분하여 입력하세요." << endl;
	for (int i = 0; i < sizeof(name) / sizeof(name[0]); i++) {
		cin.getline(name[i], 100, ';');
		if (strlen(name[i]) > strlen(longname)) {
			strcpy(longname, name[i]);
		}
	}
	for (int x = 0; x < sizeof(name)/sizeof(name[0]); x++) {
		cout << x+1 << " : " << name[x] << endl;
	}
	cout << "가장 긴 이름은 " << longname;
}