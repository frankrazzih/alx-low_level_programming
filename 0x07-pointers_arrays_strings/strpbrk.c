#include "main.h"
#include <string.h>

/**
 * _strpbrk - checks the 1st occurence of accept in the string
 * @s : pointer to the string being analyzed
 * @accept : pointer to the chars being searched for in s
 * Return: s which i sa  pointer to the first occurence of accept
 */
char *_strpbrk(char *s, char *accept)
{
	s = strpbrk(s, accept);
	return (s);
}
