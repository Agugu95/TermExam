// chapter3.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	cout << "면적은" << structObj.getArea();
    return 0;
}

