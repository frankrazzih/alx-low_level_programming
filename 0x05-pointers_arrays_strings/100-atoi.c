#include "main.h"
#include <stdlib.h>

/**
 * _atoi - Converts a string to an integer, considering leading sign and ignoring non-numeric characters
 * @s: The string to convert
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;

	/* Skip any leading non-numeric characters */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			sign *= 1;
		i++;
	}

	/* Convert the remaining string to an integer using atoi */
	int ret = atoi(&s[i]);

	return ret * sign;
}

