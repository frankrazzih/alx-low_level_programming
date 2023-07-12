#include "main.h"

/**
 * print_to_98 - Prints all numbers from a given number to 98.
 * @m: The starting number.
 *
 * Description: This function prints all numbers starting from @m up to 98.
 * If @m is greater than 98, it will print in descending order.
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


