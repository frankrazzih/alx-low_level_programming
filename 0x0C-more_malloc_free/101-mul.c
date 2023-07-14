#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - multiplies two args
 * @argc : number of args passed
 * @argv : pointer to array containing the args passed
 * Return: product of the two args
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (98);
	}
	int x, x1, x2, y, y1, y2, prod;

	/*find strlen*/
	x = strlen(argv[1]);
	y = strlen(argv[2]);
	/*check if arg1 contains non-digits*/
	for (x1 = 0; x1 < x; x1++)
	{
		if (!isdigit(argv[1][x1]))
		{
			printf("Error\n");
			return (98);
		}
	}
	/*check if arg2 contains non-digits*/
	for (y1 = 0; y1 < y; y1++)
	{
		if (!isdigit(argv[2][y1]))
		{
			printf("Error\n");
			return (98);
		}
	}
	/* convert the args to int*/
	x2 = atoi(argv[1]);
	y2 = atoi(argv[2]);
	/*check if the int are positive*/
	if (x2 < 0 || y2 < 0)
	{
		printf("Error\n");
		return (98);
	}
	/*multiply the args*/
	prod = x2 * y2;
	printf("%d\n", prod);
	return (0);
}
