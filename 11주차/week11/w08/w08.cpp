#include <iostream>
#include <string>
using namespace std;

class printer {
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
public:
	printer(string m, string mf, int a) {
		model = m;
		manufacturer = mf;
		availableCount = a;
		printedCount = 0;
	}
	string getModel() { return model; }
	string getManu() { return manufacturer; }
	int getACount() { return availableCount; }
	bool print(int pages) {
		if (availableCount > pages) {
			cout << "프린트하였습니다." << endl;
			availableCount -= pages;
			return true;
		}
		else {
			cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
			return false;
		}
	}
};

class Inkjet : public printer {
	int availableInk;
public:
	Inkjet(string m, string mf,int p,int ink) :printer(m,mf,p) {
		availableInk = ink;
	}
	int getAInk() { return availableInk; }
	void printInkJet(int pages) {
		if (print(pages)) {
			availableInk -= pages;
		}
	}
	void show() {
		cout << getModel() << ", " << getManu() << ", 남은 종이 " << getACount() << "장 ,남은 잉크 " << getAInk() << endl;
	}
};

class Laser : public printer {
	int availableToner;
public:
	Laser(string m, string mf, int p, int toner) : printer(m, mf, p) {
		availableToner = toner;
	}
	int getAToner() { return availableToner; }
	void printLaser(int pages) {
		if (print(pages)) {
			availableToner -= 1;
		}
	}
	void show() {
		cout << getModel() << ", " << getManu() << ", 남은 종이 " << getACount() << "장 ,남은 토너 " << getAToner() << endl;
	}
};

int main() {
	Inkjet ink("Officejet V40", "HP", 5, 10);
	Laser la("SCX-6x45", "삼성전자", 3, 20);

	cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
	cout << "잉크젯 : ";
	ink.show();
	cout << "레이저 : ";
	la.show();

	int x, y;
	char check = 'y';
	while (check != 'n') {
		cout << endl << "프린터(1: 잉크젯, 2:레이저)와 매수 입력>>";
		cin >> x >> y;
		if (x == 1) {
			ink.printInkJet(y);
		}
		else {
			la.printLaser(y);
		}
		ink.show();
		la.show();
		cout << "계속 프린트 하시겠습니까(y/n)>>";
		cin >> check;
	}
}