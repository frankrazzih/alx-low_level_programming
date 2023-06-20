#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @n: The number for which absolute value is to be calculated.
 *
 * Return: The absolute value of @n.
 */
int _abs(int n)
{
        int num;

        if (n == 0)
        {
                return (0);
        }
        else if (n > 0)
        {
                return (n);
        }
        else
        {
                num = n * -1;
                return (num);
        }
}

