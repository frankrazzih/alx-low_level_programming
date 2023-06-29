#include <stddef.h>
#include "main.h"

/**
 * _strncpy - Copies a string, up to a maximum of n characters, from src to dest.
 * @dest: The destination string where src will be copied.
 * @src: The source string to be copied to dest.
 * @n: The maximum number of characters to be copied from src.
 *
 * Return: Pointer to the resulting copied string.
 */
char *_strncpy(char *dest, char *src, int n)
{
    size_t i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];

    for (; i < n; i++)
        dest[i] = '\0';

    return dest;
}

