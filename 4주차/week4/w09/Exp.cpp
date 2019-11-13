#include <iostream>
#include "Exp.h"

using namespace std;

Exp::Exp() { }

Exp::Exp(int b) {
	base = b;
	value = base;
}

Exp::Exp(int b, int e) {
	base = b;
	exp = e;
	value = base;
	for (int i = 0; i < exp-1; i++) {
		value = value * base;
	}
}

int Exp::getValue() { return value; }

int Exp::getBase() { return base; }

int Exp::getExp() { return exp; }

bool Exp::equals(Exp ex) {
	if (value == ex.getValue()) return true;
	else return false;
}