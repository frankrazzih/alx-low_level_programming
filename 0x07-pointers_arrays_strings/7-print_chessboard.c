#include "main.h"
/**
 * print_chessboard - prints an 8 by 8 square
 * @a : pointer to array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int x, y;
	for (x = 0;x < 8;x++)
	{
		for (y = 0;y < 8;y++)
		{
			
			_putchar(a[x][y]);
			if (y == 7)
			{
				_putchar('\n');
			}
		}
	}
}
