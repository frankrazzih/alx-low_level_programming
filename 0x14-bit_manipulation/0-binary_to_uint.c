#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

/**
 * power - returns the power of a number
 * @base: base
 * @exp: exponent
 * Return: result of the power operation
 */
int power(int base, int exp)
{
	int a = 0;
	int result = 1;

	if (exp < 1)
	{
		result = 1;
	}
	else
	{
		while (a < exp)
		{
			result *= base;
			a++;
		}
	}

	return (result);
}

/**
 * binary_to_uint - converts binary no to unsigned int
 * @b: pointer to string holding the binary no.
 * Return: the converted int
 */
unsigned int binary_to_uint(const char *b)
{
	size_t x;
	size_t x1 = strlen(b) - 1;
	size_t p = 0;
	unsigned int sum = 0;

	/* Check if the string contains digits only */
	for (x = 0; x < strlen(b); x++)
	{
		if (!isdigit(b[x]))
		{
			return (0);
		}
	}

	/* Convert binary to decimal */
	for (x = x1; x != (size_t)-1; x--)
	{
		if (b[x] == '1')
		{
			sum += power(2, p);
		}
		p++;
	}

	return (sum);
}

