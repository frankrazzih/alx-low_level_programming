#include "main.h"

/**
 * print_triangle - Prints a triangle made of '#' characters
 * @size: Size of the triangle
 *
 * Description: This function prints a triangle made of '#' characters.
 * The size parameter determines the number of lines in the triangle.
 * If size is 0 or negative, it prints a new line.
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int row, column, numSpaces = size - 1;

		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				if (column < numSpaces)
					_putchar(' ');
				else
					_putchar('#');
			}
			numSpaces--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

