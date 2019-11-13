#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char text[10000];
	int count = 0;
	int alpha[26] = { 0 };
	char ch;
	cout << "영문 텍스트를 입력하세요. 히스토그램을 그립니다.\n텍스트의 끝은 ; 입니다. 10000개까지 가능합니다." << endl;
	cin.getline(text, 10000, ';');

	for (int i = 0; i < strlen(text); i++) {
		if (isalpha(text[i])) {
			ch = tolower(text[i]);
			alpha[ch - 'a']++;
			count++;
		}
	}
	cout << "총 알파벳 수 " << count << endl;
	for (int n = 'a'; n <= 'z'; n++) {
		cout << char(n) << " (" << alpha[n - 'a'] << ") : ";
		for (int m = 0; m < alpha[n - 'a']; m++) {
			cout << "*";
		}
		cout << endl;
	}

}