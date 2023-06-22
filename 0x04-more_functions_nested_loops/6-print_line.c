#include "main.h"

/**
 * print_line - Prints a line of underscores
 * @n: The number of underscores to print
 */
void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		if (x > 0)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}

