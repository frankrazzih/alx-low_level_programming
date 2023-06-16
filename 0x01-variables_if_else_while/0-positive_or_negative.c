#include <stdio.h>
#include <time.h>
/* more headers goes there */
#include <stdlib.h>
/*entry - main
 * return - 0 (indicating success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
        if (n>0)
	  printf("is positive\n");
	 else if (n==0)
	    printf("is zero\n");
	  else
	   printf("is negative\n"); 


	return (0);
}
