#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns sum of the passed arguments
 * @n: number of args passed
 * @... : more args to be passed
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int m;
	int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (m = 0; m < n; m++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
