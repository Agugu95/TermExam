#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class A {
private:
	int radius;
public:
	A();
	A(int r);
	void setRadius(int r);
	double getArea();
};

A::A() {
	radius = 1;
	cout << "积己磊 角青 = " << radius << endl;
}
A::A(int r) {
	radius = r;
	cout << "积己磊 角青 = " << radius << endl;
}
void A::setRadius(int r) {
	radius = r;
}
double A::getArea() {
	return 3.14*radius*radius;
}
int main() {
	int *p = new int[5];
	for (int i = 0; i < 5; i++) {
		cout << (p[i] = i) << endl;
	}
	delete[] p;

	A *q, *c;
	c = new A();
	q = new A(30);
	cout << c->getArea() << endl << q->getArea() << endl;
	delete c, q;

}