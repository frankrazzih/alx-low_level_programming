#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings, up to a maximum of n characters from src.
 * @dest: The destination string to which src will be appended.
 * @src: The source string that will be appended to dest.
 * @n: The maximum number of characters to be appended from src.
 *
 * Return: Pointer to the resulting concatenated string (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return dest;
}

