#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random {
public:
	static void seed() { srand((unsigned)time(0)); }
	static int nextInt(int min = 0, int max = 32767) {
		int n = min + (rand() % max);
		return n;
	}
	static char nextAlphabet();
	static double nextDouble();
};


char Random::nextAlphabet() {
	int n = nextInt(0, 2);
	char c;

	if (n == 0) {
		c = 65 + (rand() % 26);
	}
	else {
		c = 97 + (rand() % 26);
	}
	return c;
}

double Random::nextDouble() {
	double d = rand() / (double)RAND_MAX;
	return d;
}

int main() {
	Random::seed();

	cout << "1���� 100���� ������ �Լ� 10���� ����մϴ�." << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextInt(1, 100) << "  ";
	}
	cout << "\n���ĺ��� �����ϰ� 10�� ����մϴ�." << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextAlphabet() << "  ";
	}
	cout << "\n������ �Ǽ��� 10�� ����մϴ�." << endl;
	for (int i = 0; i < 10; i++) {
		cout << Random::nextDouble() << "  ";
		if (i == 4) cout << endl;
	}
}