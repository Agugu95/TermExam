#include "stdafx.h"
#include <iostream>
using	namespace std;

class Calculator {
public:
	virtual int add(int a, int b) = 0;
	virtual int sub(int a, int b) = 0;
};

class Calc : public Calculator {
public:
	int add(int a, int b) {
		return a + b;
	}
	int sub(int a, int b) {
		return a - b;
	}
};

int main() {
	Calc calc;
	Calc *pCalc = &calc;
	cout << pCalc->add(2, 3) << endl;
	cout << pCalc->sub(2, 5) << endl;
	delete pCalc;

}