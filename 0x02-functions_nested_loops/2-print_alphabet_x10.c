#include <stdio.h>
void print_alphabet_x10(void);
void print_alphabet_x10(void)
{
        int times=0;
        while (times < 10)
        {
        char a='a';
        for (a='a'; a <='z'; a++)
        {
                putchar(a);
        }
                        putchar('\n');
                        times++;
        }
}
int main(void)
{
	print_alphabet_x10();
	return 0;
}
