#include "stdafx.h"
#include "Adder.h"


Adder::Adder(int a,int b)
{
	op1 = a;
	op2 = b;
}


Adder::~Adder()
{
}

int Adder::process() {
	return op1 + op2;
}
