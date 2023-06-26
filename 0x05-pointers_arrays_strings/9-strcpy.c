#include <string.h>
#include "main.h"

/**
 * _strcpy - Copies a string from source to destination
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int x = strlen(src) + 1;
	int y;

	for (y = 0; y < x; y++)
	{
		dest[y] = src[y];
	}

	return dest;
}

