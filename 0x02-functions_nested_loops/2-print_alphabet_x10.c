#include "main.h"
void print_alphabet_x10(void)
{
        int times=0;
        while (times < 10)
        {
        char a='a';
        for (a='a'; a <='z'; a++)
        {
               _putchar(a);
        }
                        _putchar('\n');
                        times++;
        }
}
