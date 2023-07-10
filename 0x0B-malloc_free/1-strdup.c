#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - returns a pointer to a dup of the original string
 * @str: pointer to string to be duplicated
 * Return: null if str = null else return pointer to duplicate string
 */
char *_strdup(char *str)
{
	char *dup = malloc(sizeof(str));
	unsigned long int x = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	else if (dup == NULL)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < strlen(str); x++)
		{
			dup[x] = str[x];
		}
		return (dup);
	}
}
