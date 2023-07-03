#include "main.h"
#include <string.h>
/**
 * _strspn - returns the number of bytes of substring containing accept
 * @s : pointer to the string being analyzed
 * @accept : pointer to the chars being searched in the substring
 * Return: s which is the number of bytes of substring containing accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;

	n = strspn(s, accept);
	return (n);
}
