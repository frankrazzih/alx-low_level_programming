#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

        int power(int base, int exp)
        {
		int a = 0;
		int result = 1;
                if (exp < 1)
                {
                        result = 1;
                }
                else
                {
                        while (a < exp)
                        {
                                result *= base;
                                a++;
                        }
                }
                return (result);
        }
/**
 * binary_to_uint - converts binary no to unsigned int
 * @b : pointer to string holding the binary no.
 * Return: the converted int
 */
unsigned int binary_to_uint(const char *b)
{
	size_t x;
	size_t x1 = (strlen(b)- 1);
	size_t p = 0;
	unsigned int sum = 0;

	/*check if the string contains digits only*/
	for (x = 0; x < strlen(b); x++)
	{
		if (isdigit(b[x]) == 0)
		{
			return (0);
		}
	}
	/*atoi(b);*/
	/*check for 1's in the string*/
	for (x = x1; x != (size_t) - 1; x--)
	{
		if (b[x] == '1')
		{
			sum += power(2, p);
		}
		p++;
	}
	return (sum);
}
