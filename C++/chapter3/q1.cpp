#include "stdafx.h"

class A {
private:
	int f;
public:
	A(int s) {
		f = s;
	}
};

class Tower {
private:
	int a = 10;
public:
	Tower() {
		a = 20;
	}
};

class B { // Ŭ���� �ʵ� a�� �ʱ�ȭ �ϴ� �����ڿ� a�� return�ϴ� �Լ� ����
private:
	int a;
public :
	B(int num);
	int aB(int num);
};
B::B(int num) {
	a = num;
}
int B::aB(int num) {
	return a;
}

struct MyStruct
{
public:
	char c[30];
	int s;
	void U();
	MyStruct(int num) { s = num; };
private:
	char d[30];
};

int main() {
	A aa(3);
	A bb(5);
	Tower tower;
	B b(3);
	b.aB(5);
}