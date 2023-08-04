#include "main.h"
/**
 * flip_bits - returns the no. of
 * bits needed to move from one no to another
 * @n: initial no.
 * @m: the no to move to
 * Return: the no of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int count = 0;

	while (flip)
	{
		flip &= (flip - 1);
		count++;
	}
	return (count);
}
