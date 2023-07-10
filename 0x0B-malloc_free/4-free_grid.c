#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a two dimensional array
 * @grid: the grid to be freed
 * @height: the number of rows to be freed
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
