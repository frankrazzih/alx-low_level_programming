#include <stdio.h>

/**
 * main - Prints the largest prime factor of 612852475143.
 *
 * Return: 0 on success.
 */
int main(void)
{
	unsigned long inputNumber = 612852475143;
	unsigned long currentDivisor = 2;

	while (currentDivisor < inputNumber)
	{
		if (inputNumber % currentDivisor == 0)
		{
			inputNumber /= currentDivisor;
			currentDivisor = 2;
		}
		else
			currentDivisor++;
	}

	printf("%lu\n", inputNumber);

	return (0);
}

