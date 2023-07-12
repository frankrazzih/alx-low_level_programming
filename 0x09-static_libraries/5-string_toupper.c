#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - Converts a string to uppercase.
 * @str: The string to be converted.
 *
 * Return: Pointer to the converted string.
 */
char *string_toupper(char *str)
{
        int length = strlen(str);
	int i;
        for ( i = 0; i <= length; i++)
        {
                str[i] = toupper(str[i]);
        }
        return (str);
}

