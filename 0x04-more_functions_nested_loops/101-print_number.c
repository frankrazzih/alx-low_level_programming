#include "main.h"
void print_number(int n)
{
	int x,y,z;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	x =1;
	while (n > 0 )
	{
		n /= 10;
		x++;
	}


}
