#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if @c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);
}
