#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times
 */
void more_numbers(void)
{
	int y = 0;

	while (y < 10)
	{
		int x = 0;

		while (x <= 14)
		{
			if (x > 9)
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
			else
			{
				_putchar(x + '0');
			}

			x++;
		}
		_putchar('\n');
		y++;
	}
}
