#include <stdio.h>

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
}

/**
 * main - Entry point of the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	print_alphabet();
	putchar('\n');
	return 0;
}

