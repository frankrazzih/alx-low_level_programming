#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** 
 * Main - entry
 * Description - generates a random no when executed
 * Return: always 0 (success)
 * function main goes there 
 */
int main(void)
{
	int n;
	int n1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n1 = abs(n % 10);
	if (n > 5)
                printf("Last digit of %d is %d and is greater than 5\n", n,n1);
	else if ( n ==0)
		printf("Last digit of %d is %d and is 0\n", n,n1);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n,n1);
	return (0);
}
