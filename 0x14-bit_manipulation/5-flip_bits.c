#include "main.h"
/**
  * flip_bits - find the no. of bit to be flipped
  * @n: no. to flip to
  * @m: original no.
  * Return: no. of bits flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int v = n ^ m;

	while (v != 0)
	{
		if (v & 1)
		{
			flip = flip+ 1;
		}
		v = v >> 1;
	}
	return (flip;
}
