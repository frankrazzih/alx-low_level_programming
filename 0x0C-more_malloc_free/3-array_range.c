#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array containing values from min to max
 * @min : the lowest value of the array
 * @max : the max value for an array member
 * Return: to the created array
 */
int *array_range(int min, int max)
{
	int z;
	int y = max - min;
	int *array = malloc(sizeof(int) * (max - min + 1));

	if (min > max || array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (z = 0; z <= y; z++)
		{
			array[z] = min;
			min++;
		}
		return (array);
	}
}
