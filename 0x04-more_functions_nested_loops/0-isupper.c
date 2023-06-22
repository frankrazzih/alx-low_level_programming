#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to be checked
 *
 * Return: 1 if the character is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (0);
	}

	return (0);
}

