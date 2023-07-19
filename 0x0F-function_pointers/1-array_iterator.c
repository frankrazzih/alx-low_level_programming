#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_iterator - passes each member of an arrya to a function
 * @array: the array whose members are passed as arguments to the
 * called function
 * @size: size of the array
 * @action: pointer to a function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t y;

	for (y = 0; y < size; y++)
	{
		action(array[y]);
	}

}
