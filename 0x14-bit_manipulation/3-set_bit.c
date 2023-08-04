#include "main.h"
/**
 * set_bit - sets a bit a a given index to 1
 * @n : unsigned long int
 * @index: the binary index to be set to 1
 * Return: the initialized binary
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}

	*n |= (1UL << index);
	return (1);
}
