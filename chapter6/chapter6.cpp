// chapter6.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;



class Person {
public:
	double money;
	void addMoney(int money) {
		this->money += money;
	}
	static int sharedMoney;
	static void addShared(int r) {
		sharedMoney += r;
	}
};

int Person::sharedMoney = 10;

int main() {
	Person ryu;
	ryu.sharedMoney = 500; // ��ü.static���
	Person *p;
	p = &ryu;
	p->sharedMoney = 200; // ��ü������-> static���
}