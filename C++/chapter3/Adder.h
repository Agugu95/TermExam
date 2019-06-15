#pragma once
#include <iostream>
#include "stdafx.h"
using namespace std;
class Adder
{
private:
	int op1, op2;
public:
	Adder(int a, int b);
	~Adder();
	int process();
};

