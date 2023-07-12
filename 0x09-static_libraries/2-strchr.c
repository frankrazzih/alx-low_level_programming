#include "main.h"
#include <string.h>
/**
 * _strchr - returns a pointer with the first occurence of c in a string
 * @s : pointer to the string
 * @c : the character being checked for in a string
 * Return: s which is a pointer to the first ocuur of c in string
 */
char *_strchr(char *s, char c)
{
	s = strchr(s, c);
	return (s);
}
