#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints the passed strings
 * @separator: char used to separate the strings
 * @n: number of strings passed as arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int m;
	char *string;

	va_start(str, n);

	for (m = 0 ; m < n; m++)
	{
		string = va_arg(str, char*);
		if (separator == NULL)
		{
			printf("%s", string);
		}
		else if (string == NULL)
		{
			printf("(nil)");
		}
		else if (m == (n - 1))
		{
			printf("%s\n", string);
		}
		else
		{
			printf("%s%s", string, separator);
		}
	}
	va_end(str);
}
