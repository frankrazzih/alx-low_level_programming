#include "main.h"

/**
 * print_to_98 - Prints all numbers from a given number to 98.
 * @m: The starting number.
 */
void print_to_98(int m)
{
	int n = m;

	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}

			n++;
		}
	}
	else if (n == 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		while (n >= 98)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');

			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}

			n--;
		}
	}

	_putchar('\n');
}

