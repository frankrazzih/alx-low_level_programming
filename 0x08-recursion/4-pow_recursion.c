#include "main.h"
#include <math.h>
/**
 * _pow_recursion - returns a number raised to another
 * @x: the base number
 * @y: the power
 * Return: x raised to power y
 */
int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
	{
		return (-1);
	}
	else
	{
		power = pow(x, y);
		return (power);
	}
}
