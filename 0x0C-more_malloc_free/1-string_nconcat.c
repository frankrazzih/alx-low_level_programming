#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 * @n: Number of bytes from s2 to concatenate.
 *
 * Return: Pointer to the concatenated string (s1 + s2 up to n bytes),
 *         or NULL if memory allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
	char *str;

	x = strlen(s1);
	y = strlen(s2);
	str = malloc(x + n + 1);  /* Allocate memory for concatenated string */
	if (str != NULL)
	{
		for (z = 0; z < x; z++)
		{
			str[z] = s1[z];
		}
		if (n >= y)
		{
			for (z = 0; z < y; z++)
			{
				str[x + z] = s2[z];
			}
			str[x + y] = '\0';	/* Add null terminator at the end */
		}
		else
		{
			for (z = 0; z < n; z++)
			{
				str[x + z] = s2[z];
			}
			str[x + n] = '\0';	/* Add null terminator at the end */
		}
	}
	else
	{
		return (NULL);
	}

	return (str);
}

