#include "main.h"
/**
 * get_endianness - determine endianness
 * Return: void
 */
int get_endianness(void)
{
	char x = 1;

	char *c  = (char *) & x;

	if (*c)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
