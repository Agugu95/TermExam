#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class evenNum {
private:
public:
	evenNum() {};
	void printEven();
};

void evenNum::printEven() {
	srand((unsigned int)time(NULL));
	int count = 0;
	while (count < 5) {
		int a = rand();
		if (a % 2 == 0) {
			cout << a << endl;
			count++;
		}
	}
}

class oddNum {
private:
public:
	oddNum() {};
	void printOdd();

};

void oddNum::printOdd() {
	srand((unsigned int)time(NULL));
	int a = rand();
	int count = 0;
	while (count < 5) {
		int a = rand();
		if (a % 2 != 0) {
			cout << a << endl;
			count++;
		}
	}
}
int main() {
	evenNum even;
	even.printEven();
	cout << "**********" << endl;
	oddNum odd;
	odd.printOdd();
}