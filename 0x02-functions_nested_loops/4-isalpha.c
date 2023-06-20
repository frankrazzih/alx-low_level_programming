#include "main.h"

/**
 * _isalpha - Checks if a character is an alphabet letter.
 * @c: The character to be checked.
 *
 * Return: 1 if @c is an alphabet letter, 0 otherwise.
 */
int _isalpha(int c)
{
	int result;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}

	return (result);
}

