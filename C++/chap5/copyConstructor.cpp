#include "stdafx.h"
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
public:
	Circle(Circle& c); // 복사 생성자
	Circle(int r); // 일반 생성자
};

Circle::Circle(Circle& c) {
	this->radius = c.radius;
	cout << "복사 생성자 =" << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
}

int main() {
	Circle src(30); // 일반 생성자 호출
	Circle dest(src); // 복사 생성자 호출 

	cout << src.radius << endl;
	cout << dest.radius << endl;
}