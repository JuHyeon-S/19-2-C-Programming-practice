#include <iostream>
#include <string>
using namespace std;

class ArrayUtility2 {
public:
	static int *concat(int s1[], int s2[], int size);
	static int *remove(int s1[], int s2[], int size, int &retSize);
};

int *ArrayUtility2::concat(int s1[], int s2[], int size) {
	int *s3 = new int[size*2];
	if (!s3) return NULL;
	for (int i = 0; i < size; i++) { s3[i] = s1[i];	}
	for (int i = 0; i < size; i++) { s3[i + size] = s2[i]; }

	return s3;
}

int *ArrayUtility2::remove(int s1[], int s2[], int size, int &retSize) {
	int* p = new int[size];
	retSize = 0;

	int j, k = 0;
	for (int i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (s1[i] == s2[j]) break;
		}
		if (j == size) {
			p[k++] = s1[i];
			retSize++;
		}
	}

	int* s3 = new int[retSize];
	for (int i = 0; i < retSize; i++) {
		s3[i] = p[i];
	}
	delete p;
	return s3;
}


int main() {
	int x[5], y[5];

	cout << "정수를 5개 입력하라. 배열 x에 삽입한다 >>";
	for (int i = 0; i < sizeof(x) / sizeof(int); i++) {
		cin >> x[i];
	}
	cout << "정수를 5개 입력하라. 배열 y에 삽입한다 >>";
	for (int i = 0; i < sizeof(y) / sizeof(int); i++) {
		cin >> y[i];
	}

	cout << "합친 정수 배열을 출력한다." << endl;
	int *con = ArrayUtility2::concat(x, y, (sizeof(x) / sizeof(int)));
	
	for (int i = 0; i < 10;i++) {
		cout << con[i] << ' ';
	}
	
	cout << endl;
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다.";
	int retSize = 0;
	int* rm = ArrayUtility2::remove(x, y, (sizeof(x) / sizeof(int)), retSize);
	cout << "개수는 " << retSize << endl;
	for (int i = 0; i < retSize; i++) {
		cout << rm[i] << ' ';
	}
	cout << endl;
	system("pause");
}