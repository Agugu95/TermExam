#include "stdafx.h"
#include "Calculator.h"
#include "Adder.h"


Calculator::Calculator()
{
}


Calculator::~Calculator()
{
}

void Calculator::run() {
	cout << "�� ���� ���� �Է��ϼ��� :";
	int a, b;
	cin >> a >> b;
	Adder adder(a, b);
	cout << adder.process();
}