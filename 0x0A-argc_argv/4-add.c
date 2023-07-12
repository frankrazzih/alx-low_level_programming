#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds integer arguments given to the program
 * @argc: counts the number of arguments
 * @argv: pointer to the arguments given
 * Return: 0 indicating success else failure
 */
int main(int argc, char *argv[])
{
	int x, i;
	int y = 0;

	if (argc <= 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (x = 1; x < argc; x++)
	{
	for (i = 0; argv[x][i] != '\0'; i++)
	{
		if (isdigit(argv[x][i]))
		{
			y += atoi(&argv[x][i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	}
	printf("%d\n", y);
	return (0);
}

