#include <stdio.h>
/**
 * main - program starting point
 * @argc : number of arguments passed
 * @argv : pointer to the arguments passed
 * Return: 0 indicating success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	int x = argc - 1;

	printf("%d\n", x);
	return (0);
}
