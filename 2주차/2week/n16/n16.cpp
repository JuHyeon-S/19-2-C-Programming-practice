#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char text[10000];
	int count = 0;
	int alpha[26] = { 0 };
	char ch;
	cout << "���� �ؽ�Ʈ�� �Է��ϼ���. ������׷��� �׸��ϴ�.\n�ؽ�Ʈ�� ���� ; �Դϴ�. 10000������ �����մϴ�." << endl;
	cin.getline(text, 10000, ';');

	for (int i = 0; i < strlen(text); i++) {
		if (isalpha(text[i])) {
			ch = tolower(text[i]);
			alpha[ch - 'a']++;
			count++;
		}
	}
	cout << "�� ���ĺ� �� " << count << endl;
	for (int n = 'a'; n <= 'z'; n++) {
		cout << char(n) << " (" << alpha[n - 'a'] << ") : ";
		for (int m = 0; m < alpha[n - 'a']; m++) {
			cout << "*";
		}
		cout << endl;
	}

}