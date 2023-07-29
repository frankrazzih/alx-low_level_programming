#include "main.h"
/**
 * _pow_recursion - returns a number to the power of y
 * @x : base number
 * @y : power the base is raised to
 * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x * (_pow_recursion(x, (y - 1))));
	}
}
