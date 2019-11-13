#include <iostream>
using namespace std;

class House {
	int numOfRooms;
	int size;
public:
	House(int n, int s);
	~House();
};

House::House(int n, int s) {
	numOfRooms = n;
	size = s;
}
House::~House() {
	cout << "사이즈 : " << size << " / 방의 수 :" << numOfRooms << endl;
}
void f() {
	House a(2, 20);
}
House b(3, 30), c(4, 40);
int main() {
	f();
	House d(5, 50);
}