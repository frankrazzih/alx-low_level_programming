#include <stdio.h>
#include <ctype.h>
int main(int argc, char *argv)
{
	if (argc == 3)
	{
		printf("Error\n");
		exit(98);
	}
	x1 = *argv[2];
	x2 = *argv[3];
	y = strlen(x1);
	y1 = strlen(x2);
	z = malloc(x1 * x2);
	for (x = 0; x < y; x++)
	{
		if (isdigit(x1[x]))
		{
			for (z1 = 0; z1 < y1; z1++)
			{
				if (isdigit(x2[z1]))
				{

				}
			z = x1 * x2;
			return (z);
		}
		else
		{
			printf("Error\n");
			exit(98);
		}
	}
}
