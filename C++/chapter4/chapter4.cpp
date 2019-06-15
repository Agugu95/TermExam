// chapter4.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() { radius = 1; }
Circle::Circle(int r) {
	radius = r;
}
double Circle::getArea() {
	return 3.14*radius*radius;
}

int main()
{
	Circle p1;
	Circle p2(30);

	// 이름으로 멤버 접근 
	cout << p1.getArea() << endl;

	// 객체 포인터로 접근 
	Circle *p;
	p = &p2;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;

    return 0;
}

