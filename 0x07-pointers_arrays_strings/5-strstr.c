#include "main.h"
#include <string.h>
/**
 * _strstr - checks for the occurence of substring in a string
 * @haystack : string being checked
 * @needle : substring being searched for
 * Return: pointer to occurence of substring
 */
char *_strstr(char *haystack, char *needle)
{
	haystack = strstr(haystack, needle);
	return (haystack);
}
