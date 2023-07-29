#include "main.h"

/**
 * counter - counts
 * @c: character array
 * Return: c
 */
int counter(char *c)
{
	if (*c == '\0')
	{
		return (0);
	}
	else
	{
	return (1 + counter(c + 1));
	}
}
/**
  * checker - check if string is empty
  * @c: string to check
  * @st: which char in the string to check if it
  * is palindrome
  * @sp: where to stop the check
  * Return: 0 if not a palindrome else return 1
  */
int checker(char *c, int st, int sp)
{
	if (st >= sp)
	{
		return (1);
	}
	else if (c[st] != c[sp])
	{
		return (0);
	}
	else
	{
		return (checker(c, st + 1, sp - 1));
	}
}
/**
 * is_palindrome - check if s is a palindrome
 * @s: string to check
 * Return: 0
 */

int is_palindrome(char *s)
{
	int x = counter(s);
	int st = 0;

	return (checker(s, st, x - 1));
}
