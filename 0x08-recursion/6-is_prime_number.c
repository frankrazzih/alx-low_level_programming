#include "main.h"
/**
 * prime - returns a prime number
 * @n: number
 * @x: no to iterate
 * Return: prime no
 */
int prime(unsigned int n, unsigned int x)
{
	if (n % x == 0)
	{
		if (n == x)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0 + prime(n, x + 1));
	}
}
/**
 * is_prime_number - checks whether a no is prime
 * @n : no to check
 * Return: 0 if not a prime no else return 1
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, 2));
	}
}
