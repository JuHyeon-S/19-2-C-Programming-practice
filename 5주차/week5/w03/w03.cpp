#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;

	cout << "���ڿ� �Է�>> ";
	getline(cin, text);

	int count = 0;
	int index = 0;
	while (true) {
		index = text.find('a', index);
		if (index == -1) break;
		count++;
		index++;
	}
	cout << "���� a��" << count << "�� �ֽ��ϴ�." << endl;
}