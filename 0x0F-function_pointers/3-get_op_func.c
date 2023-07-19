#include "3-calc.h"
#include <stddef.h>
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	while (i >= 0 && i < 6)
	{
		if (ops[i].op == s)
		{
			return (ops[i].f);
			i++;
		}
	}	
}
