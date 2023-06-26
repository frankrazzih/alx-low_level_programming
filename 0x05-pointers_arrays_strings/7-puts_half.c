#include "main.h"
#include <string.h>

/**
 * puts_half - Prints the second half of a string
 * @str: The string
 *
 * Description: This function prints the second half of the given string.
 *              If the length of the string is even, it starts printing from the middle character.
 *              If the length of the string is odd, it starts printing from the character after the middle.
 *
 * Return: void
 */
void puts_half(char *str)
{
    int length = strlen(str);
    int start, i;

    if (length % 2 == 0)
    {
        start = length / 2;
    }
    else
    {
        start = (length - 1) / 2 + 1;
    }

    for (i = start; i < length; i++)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}

