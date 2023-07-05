#include "main.h"
#include <string.h>
void _print_rev_recursion(char *s)
{
	int x = strlen(s);
	if (x == 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[x-1]);
		int y = 1;	
		_print_rev_recursion(s + y);
		y++;
	}
}
