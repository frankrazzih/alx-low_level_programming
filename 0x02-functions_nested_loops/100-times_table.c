#include "main.h"

/**
 * print_times_table - Prints the multiplication table up to the specified number.
 * @n: The number specifying the table limit.
 *
 * Description: This function prints a multiplication table up to the given number.
 *              It uses the _putchar function to output characters.
 *              The table is formatted with appropriate spacing and commas.
 */
void print_times_table(int n)
{
	int x, y;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			int product = x * y;

			if (product < 10)
			{
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product >= 10 && product <= 99)
			{
				int tens = product / 10;
				int ones = product % 10;

				_putchar(tens + '0');
				_putchar(ones + '0');
			}
			else if (product >= 1000)
			{
				int th = product / 1000;
				int hund = (product / 100) % 10;
				int tens = (product / 10) % 10;
				int ones = product % 10;

				_putchar(th + '0');
				_putchar(hund + '0');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
			
                        else if (product >= 10000)
                        {
				int tenth = product / 10000;
                                int th = product / 1000;
                                int hund = (product / 100) % 10;
                                int tens = (product / 10) % 10;
                                int ones = product % 10;
				_putchar(tenth + '0');

                                _putchar(th + '0');
                                _putchar(hund + '0');
                                _putchar(tens + '0');
                                _putchar(ones + '0');
                        }
			else
			{
				int hund = (product / 100) % 10;
				int tens = (product / 10) % 10;
				int ones = product % 10;

				_putchar(hund + '0');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}

			if (y != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}

