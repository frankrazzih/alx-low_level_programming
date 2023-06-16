#include <stdio.h>
/**
 * main - entry
 * return - 0(success)
 */
int main(void)
/*
 * description - print a-z,A-Z
 */
{
char alpha = 'a';
char omega = 'f';
int alpha1 = 0;
int omega1 = 9;
        while (alpha1 <= omega1){
                        putchar(alpha1 + '0');
                        alpha1++;
                        }
        while (alpha <= omega){
                        putchar(alpha);
                        alpha++;
                        }
        putchar('\n');
        return (0);
}
