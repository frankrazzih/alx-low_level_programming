#include "main.h"

/**
 * print_alphabet - Prints the alphabet from 'a' to 'z'
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}

