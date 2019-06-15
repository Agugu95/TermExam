#include "stdafx.h"
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
public:
	Circle(Circle& c); // ���� ������
	Circle(int r); // �Ϲ� ������
};

Circle::Circle(Circle& c) {
	this->radius = c.radius;
	cout << "���� ������ =" << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
}

int main() {
	Circle src(30); // �Ϲ� ������ ȣ��
	Circle dest(src); // ���� ������ ȣ�� 

	cout << src.radius << endl;
	cout << dest.radius << endl;
}