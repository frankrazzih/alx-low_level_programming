#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints numbers from 1 to 100. For multiples of 3, it prints "Fizz".
 * For multiples of 5, it prints "Buzz". For numbers that are multiples of both 3
 * and 5, it prints "FizzBuzz".
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", num);
	}

	printf("Buzz\n");
	return (0);
}

