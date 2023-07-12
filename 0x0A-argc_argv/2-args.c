#include <stdio.h>
/**
 * main - start of the program
 * @argc : counts the number of arguments
 * @argv : pointer to the arguments
 * Return: 0 indicating success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
