#include <stdio.h>
void print_alphabet(void);
void print_alphabet(void)
{
    char alpha;

    for (alpha = 'a'; alpha <= 'z'; alpha++)
    {
        putchar(alpha);
    }
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}
