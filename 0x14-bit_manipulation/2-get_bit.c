#include "main.h"
/**
 * get_bit - returns the bit at the specified position
 * @n : the number to get its bit
 * @index: the bit to extract
 * Return: the bit at index n
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
	{
		return (-1);
	}
	if (n & (1UL << index))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
