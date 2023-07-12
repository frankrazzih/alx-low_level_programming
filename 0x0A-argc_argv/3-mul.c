#include <stdio.h>
#include <stdlib.h>
/**
 * main - start of the program
 * @argc : arguments counter
 * @argv : pointer to arguments
 * Return: 0 indicating success else return 1
 */
int main(int argc, char *argv[])
{
	int x = argc - 1;
	int y, z, mul;

	if (x < 2)
	{
		printf("error\n");
		return (1);
	}
	else
	{
		y = atoi(argv[1]);
		z = atoi(argv[2]);
		mul = y * z;
		printf("%d\n", mul);
		return (0);
	}
}
