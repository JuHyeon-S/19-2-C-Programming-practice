#include <iostream>
#include <string>
using namespace std;
int main() {
	char a[100];

	cout << "���ڿ��� �Է��ϼ��� :";
	cin.getline(a,100);
	
	int count = 0;
	for (int x = 0; x < strlen(a); x++) {
		if (a[x] == 'X' || a[x] == 'x') {
			count++;
		}
	}
	cout << "x�� ������ :" << count << endl;
}