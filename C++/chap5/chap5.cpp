// chap5.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void swap(int a, int b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void pointerSwap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

class Circle {
public:
	int radius;
public:
	Circle() {};
	Circle(int r) { radius = r; }
};

Circle getCircle() {
	Circle tmp(30);
	return tmp;
}

void refnSwap(int &a, int &b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a = 2, b = 9;
	swap(a, b);
	cout << a << " " << b << endl;
	pointerSwap(&a, &b);
	cout << a << " " << b << endl;
	Circle c;
	c = getCircle();
	cout << c.radius << endl;
	refnSwap(a, b);
	cout << a << " " << b << endl;
    return 0;
}

