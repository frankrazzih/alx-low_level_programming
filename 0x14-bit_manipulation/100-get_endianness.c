#include "main.h"
/**
 * get_endianness - determine endianness
 * Return: void
 */
int get_endianness(void)
{
	char x = 'c';

	char *c  = c&1;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
