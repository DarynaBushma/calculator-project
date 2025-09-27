#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}

#include <iostream>

int Calculator::Divide(double a, double b)
{
	if (b == 0)
	{
		std::cout << "Error: Division by zero!" << std::endl;
		return 0;
	}
	return a/b
}

