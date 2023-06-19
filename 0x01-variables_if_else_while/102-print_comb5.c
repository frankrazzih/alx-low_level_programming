#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int last=0;
    int num11;
    int num12;
    int num21;
    int num22;
    for (num1 = 0; num1 <= 99; num1++)
    {
        for (num2 = num1 + 1; num2 <= 99; num2++)
        {
		if (num1==98 && num2 == 99)
		{
			last=1;
		}
		/*if (last)
		{
			putchar('\n');
		}*/
             num11 = num1 / 10;
             num12 = num1 % 10;
             num21 = num2 / 10;
             num22 = num2 % 10;
            putchar(num11 + '0');
            putchar(num12 + '0');
            putchar(' ');
            putchar(num21 + '0');
            putchar(num22 + '0');
	    if (last)
                {
                        putchar('\n');
                }
	        else
		{
			putchar(',');
			putchar(' ');
		}
        }
    }

    return 0;
}

