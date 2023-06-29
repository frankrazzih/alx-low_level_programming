#include "main.h"

/**
 * reverse_array - Reverses the elements of an integer array.
 * @a: The array to be reversed.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
    int x = 0;
    int y = n - 1;

    while (x < y)
    {
        int temp = a[x];
        a[x] = a[y];
        a[y] = temp;
        x++;
        y--;
    }
}

