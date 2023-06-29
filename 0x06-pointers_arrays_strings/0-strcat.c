#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The string to which @src will be appended.
 * @src: The string that will be appended to @dest.
 *
 * Return: Pointer to the resulting concatenated string.
 */
char *_strcat(char *dest, char *src)
{
		dest = strcat(dest, src);
		return (dest);
}
