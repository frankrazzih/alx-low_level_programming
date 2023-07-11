#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
char *argstostr(int ac, char **av)
{
	int x, y;
	char *str = (char*)(malloc(sizeof(av) * ac));
	x = strlen(char **av);
	for (y = 0; y < x; y++)
	{
		str[y] = av[y];
	}
	str = argstostr(ac, av);
	return (str);
}
