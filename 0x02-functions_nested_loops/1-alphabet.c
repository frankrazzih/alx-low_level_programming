#include <stdio.h>

void print_alphabet(void);

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    print_alphabet();
    putchar('\n');
    return 0;
}

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
