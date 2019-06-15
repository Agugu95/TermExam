// chapter4.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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

	// �̸����� ��� ���� 
	cout << p1.getArea() << endl;

	// ��ü �����ͷ� ���� 
	Circle *p;
	p = &p2;
	cout << p->getArea() << endl;
	cout << (*p).getArea() << endl;

    return 0;
}

