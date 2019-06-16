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
	string toString() { return "Circle 객체"; }
};

int main() {
	Derived d, *pDer;
	pDer = &d;
	pDer->f();

	Base *pBase;
	pBase = pDer; // 파생클래스의 포인터->슈퍼클래스포인터 업캐스팅
	pBase->f(); // 업캐스팅 했음에도 파생클래스의 함수 실행
	pBase->Base::f(); // 범위 지정 연산자를 이용한 정적바인딩 super클래스의 virtual 호출

	Circle cir;
	Circle* pCir = &cir; // 추상 클래스를 상속받은 객체 포인터 
	Shape *pShaep; // 추상 클래스의 포인터
	
}