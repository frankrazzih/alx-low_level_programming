#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - Prints values based on the provided format string.
 * @format: A string containing format specifiers.
 * @...: Variadic arguments to be printed based on the format specifiers.
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list args;
	unsigned long int format_length = strlen(format);
	unsigned long int ii = 0;

	va_start(args, format);
	while (ii < format_length)
	{
		switch (format[ii])
		{
		case 'i':
			printf("%s%d", (ii == 0 ? "" : ", "), va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", (ii == 0 ? "" : ", "), va_arg(args, double));
			break;
		case 'c':
			printf("%s%c", (ii == 0 ? "" : ", "), va_arg(args, int));
			break;
		case 's':
			{
				char *s = va_arg(args, char *);

				if (s == NULL)
					printf("%s(nil)", (ii == 0 ? "" : ", "));
				else
					printf("%s%s", (ii == 0 ? "" : ", "), s);
			}
			break;
		default:
			break;
		}
		ii++;
	}
	va_end(args);
	putchar('\n');
}

