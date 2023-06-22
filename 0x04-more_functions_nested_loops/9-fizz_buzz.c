#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This program prints numbers from 1 to 100.
 * For multiples of 3, it prints "Fizz". For multiples of 5,
 * it prints "Buzz". For numbers that are multiples of both
 * 3 and 5, it prints "FizzBuzz".
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int x;

    for (x = 1; x <= 100; x++)
    {
        int y = x % 3;
        int z = x % 5;

        if (y == 0 && z == 0)
        {
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
        }
        else if (z == 0)
        {
            _putchar('B');
            _putchar('u');
            _putchar('z');
            _putchar('z');
        }
        else if (y == 0)
        {
            _putchar('F');
            _putchar('i');
            _putchar('z');
            _putchar('z');
        }
        else if (x >= 100)
        {
            _putchar(x / 100 + '0');
            _putchar((x / 10) % 10 + '0');
            _putchar(x % 10 + '0');
        }
        else if (x > 9 && x <= 99)
        {
            _putchar(x / 10 + '0');
            _putchar(x % 10 + '0');
        }
        else if (x >= 1 && x <= 9)
        {
            _putchar(x + '0');
        }

        _putchar(' ');
    }

    _putchar('\n');
    return (0);
}

