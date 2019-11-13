#include <iostream>
#include <string>
using namespace std;

class Console {
public:
	static void start() {
		cout << "***** 한성항공에 오신것을 환영합니다 *****" << endl << endl;
	}
	static int menu() {
		int x;
		cout << endl <<"예약:1, 취소:2, 보기:3, 끝내기:4>> ";
		cin >> x;
		return x;
	}
	static int time() {
		int x;
		cout << "07시:1, 12시:2, 17시:3>>";
		cin >> x;
		return x;
	}
	static int seatNum() {
		int x;
		cout << "좌석 번호>> ";
		cin >> x;
		return x;
	}
	static string seatName() {
		string name;
		cout << "이름 입력>> ";
		cin >> name;
		return name;
	}
};

class Seat {
	string name;
public:
	Seat() { name = "---"; }
	void setName(string n) { name = n; }
	string getName() { return name; }
};

class Schedule {
	Seat* s;
	string time;
public:
	Schedule() {
		s = new Seat[8];
	}
	~Schedule() { delete[] s; }
	void setTime(string t) { time = t; }
	void setSeat(int n, string str){
		s[n - 1].setName(str);
	}
	void cancleSeat(int n, string str) {
		s[n - 1].setName("---");
	}
	void show() {
		cout << time << ": ";
		for (int i = 0; i < 8; i++) {
			cout << s[i].getName() << "\t";
		}
		cout << endl;
	}
};

class AirlineBook {
	Schedule* schedule;
public:
	AirlineBook() {
		schedule = new Schedule[3];
		schedule[0].setTime("07시");
		schedule[1].setTime("12시");
		schedule[2].setTime("17시");
	}
	~AirlineBook() { delete[] schedule; }
	void Book(int t) {
		schedule[t - 1].show();
		int n = Console::seatNum();
		string s = Console::seatName();
		schedule[t - 1].setSeat(n, s);
	}
	void cancle(int t) {
		schedule[t - 1].show();
		int n = Console::seatNum();
		string s = Console::seatName();
		schedule[t - 1].cancleSeat(n, s);
	}
	void showAll() {
		for (int i = 0; i < 3; i++) {
			schedule[i].show();
		}
	}
};

int main() {
	AirlineBook a;
	Console::start();
	bool check = true;
	while (check) {
		int n = Console::menu();
		if (n == 1) {
			int t = Console::time();
			a.Book(t);
		}
		else if (n == 2) {
			int t = Console::time();
			a.cancle(t);
		}
		else if (n == 3) {
			a.showAll();
		}
		else {
			cout << "예약시스템을 종료합니다." << endl;
			check = false;
		}
	}
}
