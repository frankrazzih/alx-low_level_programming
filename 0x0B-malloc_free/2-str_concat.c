#include "main.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the 2nd string
 * Return: return pointer to concatenated string else null
 */
char *str_concat(char *s1, char *s2)
{
	char *con = malloc((sizeof(s1) + sizeof(s2)) - 4);
	size_t x;
	size_t y = strlen(s1);
	size_t z = strlen(s2);
	const char *null = "NULL";
	const char *checker = strstr(s1, null);
	const char *checker1 = strstr(s2, null);

	if (checker != NULL || checker1 != NULL)
	{
		return ("\n");
	}
	else if (con == NULL)
	{
		return (NULL);
	}
	else
	{
	for (x = 0; x < y; x++)
	{
		con[x] = s1[x];
	}
	for (x = 0; x < z; x++)
	{
		con[x + y] = s2[x];
	}
		return (con);
		free(con);
	}
}
