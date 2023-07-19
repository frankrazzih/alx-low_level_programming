#include "function_pointers.h"
#include <string.h>

/**
 * print_name - takes a string and pointer to function as args
 * printer - prints the passed string
 * @name: pointer to string to be printed
 * f - pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
void printer(char *name)
{
	size_t y;
	size_t x = strlen(name);

	for (y = 0; y < x ; y++)
	{
		_putchar(name[y]);
	}
	_putchar('\n');
}
