#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
 * function main - start of the program
 * description - the program generates a random no. each time it is executed
 * return - 0(indicating success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		 printf("%d is negative\n", n);
	return (0);
}
