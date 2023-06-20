#include "main.h"

/**
 * jack_bauer - Prints every minute of a 24-hour day.
 *
 * Description: This function prints every minute of a 24-hour day in the format HH:MM.
 *              The range of hours is from 00 to 23, and the range of minutes is from 00 to 59.
 */
void jack_bauer(void)
{
	int x, y, x1, x2, y1, y2;

	for (x = 0; x <= 23; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			x1 = x / 10;
			x2 = x % 10;
			y1 = y / 10;
			y2 = y % 10;

			_putchar(x1 + '0');
			_putchar(x2 + '0');
			_putchar(':');
			_putchar(y1 + '0');
			_putchar(y2 + '0');
			_putchar('\n');
		}
	}
}

