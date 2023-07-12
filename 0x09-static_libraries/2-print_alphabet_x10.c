#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet from 'a' to 'z' ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int times = 0;

	while (times < 10)
	{
		char a;

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}

		_putchar('\n');
		times++;
	}
}

