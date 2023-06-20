#include <stdio.h>

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if @c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
    int result;

    if (c >= 'a' && c <= 'z')
    {
        result = 1;
        putchar(result + '0');
    }
    else
    {
        result = 0;
        putchar(result + '0');
    }

    return result;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    _islower('J');
    putchar('\n');
    return 0;
}

