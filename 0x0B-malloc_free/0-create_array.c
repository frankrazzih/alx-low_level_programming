#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * *create_array - makes an array and initializes it with a char
 * @size: the size of the array
 * @c: the char to fill the array with
 * Return: NULL if size is 0 else return pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	else if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (x = 0; x < size; x++)
	{
		array[x] = c;
	}
		return (array);
	}
}
