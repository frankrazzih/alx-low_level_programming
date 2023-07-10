#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * **alloc_grid - creates a two dimensional array
 * @width: width of the two dimensional array
 * @height: height of the array
 * Return: a pointer to the two dimensional array
 */
int **alloc_grid(int width, int height)
{
	int x;
	int y;
	int **array = malloc(sizeof(int) *  height);

	if (array == NULL || width <= 0 || height <= 0 || malloc == NULL)
	{
		free(array);
		return (NULL);
	}
	else
	{
	for (x = 0; x < height; x++)
	{
		array[x] = malloc(sizeof(int) * width);
		for (y = 0; y < width; y++)
		{
			array[x][y] = 0;
		}
	}
	}
	return (array);
}
