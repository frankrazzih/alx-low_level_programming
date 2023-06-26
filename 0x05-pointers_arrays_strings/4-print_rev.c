#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints a string in reverse
 * @s: The input string
 *
 * Description: This function prints each character of the input string
 *              in reverse order, starting from the last character.
 */
void print_rev(char *s)
{
	size_t x = strlen(s);
	char y;

	for (x = strlen(s); x > 0; x--)
	{
		y = s[x - 1];
		_putchar(y);
	}

	_putchar('\n');
}

