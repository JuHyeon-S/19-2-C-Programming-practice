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
			cout << "����Ʈ�Ͽ����ϴ�." << endl;
			availableCount -= pages;
			return true;
		}
		else {
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
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
		cout << getModel() << ", " << getManu() << ", ���� ���� " << getACount() << "�� ,���� ��ũ " << getAInk() << endl;
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
		cout << getModel() << ", " << getManu() << ", ���� ���� " << getACount() << "�� ,���� ��� " << getAToner() << endl;
	}
};

int main() {
	Inkjet ink("Officejet V40", "HP", 5, 10);
	Laser la("SCX-6x45", "�Ｚ����", 3, 20);

	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
	cout << "��ũ�� : ";
	ink.show();
	cout << "������ : ";
	la.show();

	int x, y;
	char check = 'y';
	while (check != 'n') {
		cout << endl << "������(1: ��ũ��, 2:������)�� �ż� �Է�>>";
		cin >> x >> y;
		if (x == 1) {
			ink.printInkJet(y);
		}
		else {
			la.printLaser(y);
		}
		ink.show();
		la.show();
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
		cin >> check;
	}
}