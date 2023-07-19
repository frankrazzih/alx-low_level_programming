#include "function_pointers.h"
/**
 * int_index - comapres an array member using a comaparative function
 * @array: the array being checked
 * @size : size of array
 * @cmp: pointer to comparative function
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
		{
			return (x);
		}
	}
	return (-1);
}
