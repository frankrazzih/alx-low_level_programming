#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - returns the squareroot of a number
 * @n : input number
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	float x = sqrt(n);
	int y = (int) x;

	if (x == y)
	{
		return (y);
	}
	else
	{
		return (-1);
	}
}
