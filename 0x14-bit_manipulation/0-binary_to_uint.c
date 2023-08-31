#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int len;
	int x;
	unsigned int sum = 0;

	len = strlen(b);
	for (x = (len - 1); x >= 0; x--)
	{
		if (isdigit(b[x]) == 0)
		{
			return (0);
		}
		if (b[x] == '1')
		{
			sum += pow(2, (len - 1 - x));
		}
	}
	return (sum);
}
