#include <stdio.h>
/**
 * main - start of the program
 * @argc: arguments counter
 * @argv: pointer to the string arguments
 * Return: 0 indicating success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
	printf("%s", argv[x]);
	}
	printf("\n");
	return (0);
}
