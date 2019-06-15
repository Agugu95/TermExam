#include "stdafx.h"
#include <iostream>
using namespace std;

class A {
private:
	int r;
public:
	A() { r = 1; }
	A(int num) { r = num; }
};

int main() {
	A a[2][2] = { {A(), A(10)}, {A(5), A()} };
	cout << a[0] << endl;

}