// chapter6.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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
	ryu.sharedMoney = 500; // 객체.static멤버
	Person *p;
	p = &ryu;
	p->sharedMoney = 200; // 객체포인터-> static멤버
}