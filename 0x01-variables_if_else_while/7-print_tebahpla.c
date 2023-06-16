#include <stdio.h>
/**
 * main - entry
 * description - print a -z
 * return - 0(success)
 */
int main(void){
int alpha = 'z';
int omega = 'a';
        while (alpha >= omega){
                       putchar(alpha);
                        alpha--;
                        }
        putchar('\n');
        return (0);
}
