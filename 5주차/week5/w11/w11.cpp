#include <iostream>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill();
	void consume();
	int getSize();
};

class CoffeeVendingMachine {
	Container tong[3];

	void fill();
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
public:
	void run();
};

void Container::fill() { size = 10; }
void Container::consume() { size--; }
int Container::getSize() { return size; }

void CoffeeVendingMachine::fill() {
	for (int i = 0; i < 3; i++) {
		tong[i].fill();
	}
}

void CoffeeVendingMachine::selectEspresso() {
	if (tong[0].getSize() < 1 || tong[1].getSize() < 1) {
		cout << "���ᰡ �����մϴ�." << endl;
	}
	else {
		tong[0].consume();
		tong[1].consume();
		cout << "���������� �弼��" << endl;
	}
}

void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].getSize() < 1 || tong[1].getSize() < 2) {
		cout << "���ᰡ �����մϴ�." << endl;
	}
	else {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		cout << "�Ƹ޸�ī�� �弼��" << endl;
	}
}

void CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() < 1 || tong[1].getSize() < 2 || tong[2].getSize() < 1) {
		cout << "���ᰡ �����մϴ�." << endl;
	}
	else {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
		cout << "����Ŀ�� �弼��" << endl;
	}
}

void CoffeeVendingMachine::show() {
	cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::run() {
	int answer = 1;
	int check = 0;
	while (check == 0) {
		cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>> ";
		cin >> answer;
		if (answer == 1) { selectEspresso(); }
		else if (answer == 2) { selectAmericano(); }
		else if (answer == 3) { selectSugarCoffee(); }
		else if (answer == 4) { show(); }
		else if (answer == 5) { fill(); show(); }
		else { check = 1; }
	}
}

int main() {
	CoffeeVendingMachine c;
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;
	c.run();
}