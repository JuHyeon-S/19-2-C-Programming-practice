#include <iostream>
using namespace std;

int main() {
	char arr[3][100] = {'\0'};
	int in[2];
	int rst;
	int wh = 1;
	while (wh != 0) {
		wh = 1;
		cout << "? ";

		int j = 0;
		for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
			cin.getline(arr[i],100,' ');
			if (!atoi(arr[0])) {
				wh = 0;
				break;
			}
			if (i == 0 || i == 2) {
				in[j++] = atoi(arr[i]);
			}
		}
		if (wh == 0) {
			break;
		}

		if (arr[1][0] == '+') {
			rst = in[0] + in[1];
		}
		else if (arr[1][0] == '-') {
			rst = in[0] - in[1];
		}
		else if (arr[1][0] == '*') {
			rst = in[0] * in[1];
		}
		else if (arr[1][0] == '/') {
			rst = in[0] / in[1];
		}
		else if (arr[1][0] == '%') {
			rst = in[0] % in[1];
		}
		cout << in[0] << arr[1] << in[1] << "=" << rst << endl;
	}
	
}