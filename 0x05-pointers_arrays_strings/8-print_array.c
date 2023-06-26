#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 * @a: The array
 * @n: Number of elements in the array
 *
 * Description: This function prints the elements of the given array. It separates the elements by a comma
 *              and adds a newline character at the end.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (m == n - 1)
		{
			printf("%d\n", a[m]);
		}
		else
		{
			printf("%d, ", a[m]);
		}
	}
}

