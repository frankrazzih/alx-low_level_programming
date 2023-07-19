#include <stdio.h>
#include "3-calc.h"
#include <ctype.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	int a, b;

	/**if (isdigit(*argv[1]) && isdigit(*argv[3]))
	{*/
		a = atoi(argv[1]);
		b = atoi(argv[3]);
	/*}
	else
	{
		printf("Error\n");
		return (98);
	}*/
	char *s = argv[2];
	printf("%d\n", get_op_func(s)(a, b));
	return (0);
}
