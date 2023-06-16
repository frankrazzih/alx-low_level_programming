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
char omega = 'z';
char alpha1 = 'A';
char omega1 = 'Z';
        while (alpha <= omega){
                        putchar(alpha);
                        alpha++;
                        }
	while (alpha1 <= omega1){
                        putchar(alpha1);
                        alpha1++;
                        }
        putchar('\n');
        return (0);
}
           
