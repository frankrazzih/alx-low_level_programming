#include "main.h"

/**
 * times_table - Prints the multiplication table of numbers 0 to 9.
 */
void times_table(void)
{
    int x, y;

    for (x = 0; x <= 9; x++)
    {
        for (y = 0; y <= 9; y++)
        {
            int product = x * y;

            if (product < 10)
            {
                _putchar(' ');
                _putchar(product + '0');
            }
            else
            {
                int tens = product / 10;
                int ones = product % 10;

                _putchar(tens + '0');
                _putchar(ones + '0');
            }

            if (y != 9)  /* Check if it's not the last number in the row */
            {
                _putchar(',');
                _putchar(' ');
            }
        }
        
        /* After each row, we print a new line */
        _putchar('\n');
    }
}

