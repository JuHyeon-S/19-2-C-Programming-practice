#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Player {
	string name;
public:
	string getName();
	void setName(string name);
};

class GamblingGame{
	int ran[3];
	Player* p;
public:
	GamblingGame();
	void setPlayer();
	void setCard();
	void start();
};

string Player::getName() { return name; }

void Player::setName(string name) { this->name = name; }

GamblingGame::GamblingGame() {
	srand((unsigned int)time(0));
	p = new Player[2];
	cout << "***** ���� ������ �����մϴ�. *****" << endl;
}

void GamblingGame::setPlayer() {
	string name;
	cout << "ù��° ���� �̸� >> ";
	cin >> name;
	p->setName(name);

	cout << "�ι�° ���� �̸� >> ";
	cin >> name;
	(p+1)->setName(name);
	getchar();
}
void GamblingGame::setCard() {
	for (int i = 0; i < 3; i++) {
		ran[i] = rand() % 3;
	}
}
void GamblingGame::start() {
	int i = 0;
	while (1) {
		cout << (p+(i%2))->getName() << ":";
		getchar();
		setCard();
		cout << "\t\t" << ran[0] << "\t" << ran[1] << "\t" << ran[2] << "\t";
		if (ran[0] == ran[1] && ran[1] == ran[2]) {
			break;
		}
		cout << "�ƽ�����!" << endl;
		i++;
	}
	cout << (p + (i % 2))->getName() << "�� �¸�!!";
}


int main() {
	GamblingGame gg;
	gg.setPlayer();
	gg.start();
}