#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: the size of memory to allocate
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(sizeof(b));

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (ptr);
	}
}
