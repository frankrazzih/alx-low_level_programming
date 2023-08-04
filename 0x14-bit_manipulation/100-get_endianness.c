#include "main.h"
/**
 * get_endianness - checks the endianness of a computer
 * Return: 1 if little endian else 0 if big endian
 */
int get_endianness(void)
{
	int n = 1;
	char array[] = "my name";

	if (n & array[0])
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
