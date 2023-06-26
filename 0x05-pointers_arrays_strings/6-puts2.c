#include "main.h"
#include <string.h>

/**
 * puts2 - Prints every other character of a string, followed by a newline
 * @str: The string to be printed
 *
 * Description: This function prints every other character of the given string.
 *              It starts with the first character and skips the next character, and so on,
 *              until the end of the string. After printing all the characters,
 *              it prints a newline character.
 *
 * Return: void
 */
void puts2(char *str)
{
    int length = strlen(str);
    int i;

    for (i = 0; i < length; i += 2)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}

