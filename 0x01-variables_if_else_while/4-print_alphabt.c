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
        while (alpha <= omega){
		if (alpha == 'q' || alpha == 'e'){
			alpha++;
                                continue;
		}
                        putchar(alpha);
                        alpha++;
			}
	putchar('\n');
        return (0);
}
