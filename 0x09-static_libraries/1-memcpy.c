#include "main.h"
#include <string.h>
/**
 * _memcpy - copies n bytes from src to dest
 * @dest: where n bytes are copied to
 * @src: where n bytes are copied from
 * @n: the number of bytes to be copied
 * Return: dest which is a pointer to the copied bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	dest = memcpy(dest, src, n);
	return (dest);
}
