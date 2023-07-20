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
	va_list args;
	unsigned int m;
	char *string;

	va_start(args, n);

	for (m = 0; m < n; m++)
	{
		string = va_arg(args, char*);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);

			if (separator != NULL && m < n - 1)
			{
				printf("%s", separator);
			}
		}
	}

	va_end(args);
	printf("\n");
}

