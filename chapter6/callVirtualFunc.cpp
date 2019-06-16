#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Base {
public:
	virtual void f() {
		cout << "Base function call" << endl;
	}
};

class Derived : public Base {
public:
	virtual void f() {
		cout << "Derived fucntion call" << endl;
	}
};

class Shape {
public:
	virtual void draw() = 0;
};

class Circle :public Shape {
public:
	virtual void draw() {
		cout << "Circle" << endl;
	}
	string toString() { return "Circle ��ü"; }
};

int main() {
	Derived d, *pDer;
	pDer = &d;
	pDer->f();

	Base *pBase;
	pBase = pDer; // �Ļ�Ŭ������ ������->����Ŭ���������� ��ĳ����
	pBase->f(); // ��ĳ���� �������� �Ļ�Ŭ������ �Լ� ����
	pBase->Base::f(); // ���� ���� �����ڸ� �̿��� �������ε� superŬ������ virtual ȣ��

	Circle cir;
	Circle* pCir = &cir; // �߻� Ŭ������ ��ӹ��� ��ü ������ 
	Shape *pShaep; // �߻� Ŭ������ ������
	
}