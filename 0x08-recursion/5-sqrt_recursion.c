 #include "main.h"

/**
 * nat - returns  natural square root of a number.
 * @n: number.
 * @x: iterator.
 * Return: square root or -1.
 */

int nat(int n, int x)
{
	if (x % (n / x) == 0)
	{
		if (x * (n / x) == n)
		{
			return (x);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + nat(n, x + 1));
}
/**
 * _sqrt_recursion - return square root
 * @n: number to whose sqrt is needed
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (nat(n, 2));
}
