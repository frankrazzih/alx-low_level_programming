#include <stdio.h>
/**
 * Main - entry
 * description - print a -z
 * return: 0(success)
 */
int main(void)
{
	char alpha = 'a';
	char omega = 'z';
	while (alpha <= omega)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);			
}
