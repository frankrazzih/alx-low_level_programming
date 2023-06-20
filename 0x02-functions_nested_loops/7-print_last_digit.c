#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @x: The number to extract the last digit from.
 *
 * Return: The last digit of @x.
 */
int print_last_digit(int x)
{
	int y;

	if (x > 0)
	{
		y = x % 10;
		_putchar(y + '0');
		return y;
	}
	else if (x == 0)
	{
		_putchar('0');
		return 0;
	}
	else
	{
		x *= -1;
		y = x % 10;
		_putchar(y + '0');
		return y;
	}
}

