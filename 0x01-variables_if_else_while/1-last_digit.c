#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Entry - main
 * Description - the program generates a random no each time it is executed and prints the corresponding message.
 * Return - 0 (indicates success)
 * function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>5)
                printf("Last digit of %d is and is greater than five\n",n);
	else if (n==0)
		printf("Last digit of %d is and is 0\n",n);
	else
		printf("Last digit of %d is and is less than 6 and not 0\n",n);
	return (0);
}
