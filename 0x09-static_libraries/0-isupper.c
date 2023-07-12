#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: The character to be checked
 *
 * Description: This function checks if a character is an uppercase letter.
 * It returns 1 if the character is uppercase, and 0 otherwise.
 *
 * Return: 1 if the character is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	char uppercase;
	int result = 0;

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			result = 1;
			break;
		}
	}

	return result;
}

