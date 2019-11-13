#include <iostream>
using namespace std;

class Calender {
	private:
		int year;
	public:
		Calender();
		int getYear();
};
Calender::Calender() {
	year = 10;
}
int Calender::getYear() {
	return year;
}
int main() {
	Calender ca;
	cout << ca.getYear();
}