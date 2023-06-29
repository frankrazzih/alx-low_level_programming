#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings, up to a maximum of n characters from src.
 * @dest: The string to which src will be appended.
 * @src: The string that will be appended to dest.
 * @n: The maximum number of characters to be appended from src.
 *
 * Return: Pointer to the resulting concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
    size_t destlen = strlen(src);
    size_t x;

    for (x = 0; x < n && src[x] != '\0'; x++)
    {
        dest[destlen + x] = src[x];
    }

    dest[destlen + x] = '\0';

    return (dest);
}

