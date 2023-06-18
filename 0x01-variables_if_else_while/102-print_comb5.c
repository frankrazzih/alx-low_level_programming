#include <stdio.h>
int main(void)
{
	int num1;
	int num2;
	int num11;
	int num12;
	int num22;
	int num23;
	for (num1=0; num1 <=99; num1++)
	{
		for (num2=0; num2 <=99; num2++)
		{
			if (num1 == num2 || num1>num2 )
			{
				continue;
			}
			if (num2 == 99 && num1 == 98)
			{
				putchar('\n');
			}
			int num11=num1 / 10;
			int num12=num1 % 10;
			int num22=num2 / 10;
			int num23=num2 % 10;
			putchar(num11 + '0');
			putchar(num12 + '0');
			putchar(' ');
			putchar(num22 + '0');
			putchar(num23 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
