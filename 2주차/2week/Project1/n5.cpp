#include <iostream>
#include <string>
using namespace std;
int main() {
	char a[100];

	cout << "문자열을 입력하세요 :";
	cin.getline(a,100);
	
	int count = 0;
	for (int x = 0; x < strlen(a); x++) {
		if (a[x] == 'X' || a[x] == 'x') {
			count++;
		}
	}
	cout << "x의 갯수는 :" << count << endl;
}