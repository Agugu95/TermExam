// chapter3.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct MyStruct
{
private:
	int radius;
protected:
public:
	MyStruct(int num);
	double getArea();

};

MyStruct::MyStruct(int num) {
	radius = num;
}
double MyStruct::getArea() {
	return 3.14*radius*radius;
}

int main()
{
	MyStruct structObj(3);
	cout << "������" << structObj.getArea();
    return 0;
}

