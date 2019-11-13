#include <iostream>
#include <string>
using namespace std;

class Statistics {
	int* arr;
	int cnt;
public:
	Statistics() {
		arr = new int[5];
		cnt = 0;
	}
	bool operator!() {
		if (cnt == 0) return true;
		return false;
	}
	Statistics& operator<<(int n) {
		arr[cnt] = n;
		cnt++;
		return *this;
	}
	void operator>>(int& avg) {
		int sum = 0;
		for (int i = 0; i < cnt; i++) {
			sum += arr[i];
		}
		avg = sum / cnt;
	}
	void operator~() {
		for (int i = 0; i < cnt; i++)
			cout << arr[i] << ' ';
		cout << endl;
	}
};

int main() {
	Statistics stat;
	if (!stat) cout << "���� ��� �����Ͱ� �����ϴ�." << endl;

	int x[5];
	cout << "5 ���� ������ �Է��϶�>>";
	for (int i = 0; i < 5; i++) {
		cin >> x[i];
		stat << x[i];
	}
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	cout << "avg = " << avg << endl;
}