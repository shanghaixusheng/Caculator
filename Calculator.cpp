#include "pch.h"
#include "Calculator.h"



double Calculator::Calculate(double x, char oper, double y)
{
	switch (oper)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	default:
		return 0.0;
	}
}

bool Calculator::isAlive() {
	return true;
}

int Calculator::testint()
{
	return 0;
}
