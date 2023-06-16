#include <stdio.h>
/**
 * main - entry
 * description - make a combiantion of single digit no.s
 * return - 0(success)
 */
int main(void)
{
	/*initialize the var int*/
	int num1 =0;
	int num2 =0;
	/*set the range of the first no I want to combine*/
	for (num1 =0; num1 <= 9; num1++){
		/*set the range of the second no.*/
	for (num2 =0; num2 <= 9; num2++){
		/*print the combination*/
	putchar(num1 + '0');
	putchar(num2 + '0');
	putchar(',');
	putchar(' ');
	}}
	/*end*/
return (0);
}
	

