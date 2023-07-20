#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers separated by separators
 * @separator: char separating numbers
 * @n: number of args passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list args;
	int x;

	if (separator == NULL)
	{
		printf("\n");
	}
	va_start(args, n);
	for (m = 0; m < n; m++)
	{
		x = va_arg(args, int);
		if (m == (n - 1))
		{
			printf("%d\n", x);
		}
		else
		{
			printf("%d%s", x, separator);
		}
	}
}
