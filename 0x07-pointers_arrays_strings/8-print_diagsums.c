#include "main.h"

/**
 * print_diagsums - Prints the sum of the main diagonal and anti-diagonal elements of a square matrix
 * @a: Pointer to the square matrix
 * @size: Size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, i;
	int diag = 0;
	int diag1 = 0;
        char diag_sum_str[12]; /* Assuming the maximum sum can be represented with 11 digits */
        char diag1_sum_str[12]; /* Assuming the maximum sum can be represented with 11 digits */
        int diag_sum_length = 0;
        int diag1_sum_length = 0;
        int temp = diag;
	
	for (x = 0; x < size; x++)
	{
		diag += a[size * x + x];
		diag1 += a[size * (x + 1) - (x + 1)];
	}
	while (temp > 0)
	{
		diag_sum_str[diag_sum_length++] = '0' + (temp % 10);
		temp /= 10;
	}
	if (diag == 0)
		diag_sum_str[diag_sum_length++] = '0';
	diag_sum_str[diag_sum_length] = '\0';
	temp = diag1;
	while (temp > 0)
	{
		diag1_sum_str[diag1_sum_length++] = '0' + (temp % 10);
		temp /= 10;
	}
	if (diag1 == 0)
		diag1_sum_str[diag1_sum_length++] = '0';
	diag1_sum_str[diag1_sum_length] = '\0';
	for (i = 0; i < diag_sum_length; i++)
		_putchar(diag_sum_str[diag_sum_length - 1 - i]);
	_putchar(',');

	_putchar(' ');

	for (i = 0; i < diag1_sum_length; i++)
		_putchar(diag1_sum_str[diag1_sum_length - 1 - i]);
	_putchar('\n');
}

