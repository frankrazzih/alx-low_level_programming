#include "main.h"
#include <string.h>
/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: Value to be set.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	s = memset(s, b, n);
	return (s);
}

