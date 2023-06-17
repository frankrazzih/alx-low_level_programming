#include <stdio.h>
/**
 * Main - entry
 * Description - print possible combination of two digits
 * Return: Always 0(success)
 */
int main(void)
{
        /*initialize variables*/
        int num1;
        int num2;
	int num3;
        /*loop to iterate over single digits*/
        for (num1 =0; num1 <=9; num1++)
        {
                for (num2 =0; num2 <=9; num2++)
                {
			for (num3 =0; num3 <=9; num3++)
			{
			/*skip the same no.s*/
                        if (num1 == num2 || num1 == num3 || num2 == num3 || num2 < num1 || num3 < num2)
                        {
                                continue;
                        }
			/*print the combination*/
                        putchar(num1+ '0');
                        putchar(num2+ '0');
			putchar(num3+ '0');
			if (num1 != 7 || num2 != 8 || num3 != 9)
			{
                        putchar(',');
                        putchar(' ');
			}
			}
                }
        }
	putchar('\n');
        /*program ends*/
        return (0);
}
