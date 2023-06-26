#include "main.h"
/**
 * void swap_int - swpas the values of two int
 * @*a,@*b - the function parameters
 * return -void
 */
void swap_int(int *a,int *b)
{
	const int c = *a;
	*a = *b;
	*b = c;

}
