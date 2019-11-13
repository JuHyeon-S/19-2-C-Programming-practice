#include "Ram.h"
#include <iostream>
using namespace std;

Ram::Ram() {
	int i;
	for (i = 0; i < sizeof(mem) / sizeof(char); i++) {
		mem[i] = 0;
	}
	size = i;
}
char Ram::read(int address) {
	return mem[address];
}

void Ram::write(int address, char value) {
	mem[address] = value;
}

Ram::~Ram() {
	cout << "메모리 제거됨" << endl;
}