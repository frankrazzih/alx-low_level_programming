#include "main.h"
/**
 * clear_bit - clears the bit at the given index
 * @n : unsigned long int
 * @index : bit to set to zero
 * Return: 1 indicating success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 32)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
