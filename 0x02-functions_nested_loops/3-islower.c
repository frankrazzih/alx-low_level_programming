#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if @c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
    int result;

    if (c >=97 && c <=122)
    {
        result = 1;
        _putchar(result + '0');
    }
    else
    {
        result = 0;
        _putchar(result + '0');
    }

    return result;
}
