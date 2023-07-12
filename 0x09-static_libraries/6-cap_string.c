#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * cap_string - Capitalizes the first letter of each word in a string
 *              that follows a specified separator.
 * @str: The input string to be processed.
 *
 * Return: The modified string with capitalized words.
 */
char *cap_string(char *str)
{
	char separators[] = ",.;?!(){} \n";
	char *token;
	int capitalize = 1;

	token = strtok(str, separators);

	while (token != NULL)
	{
		if (capitalize)
		{
			*token = toupper(*token);
			capitalize = 0;
		}

		if (strchr(separators, token[strlen(token) - 1]) != NULL)
		{
			capitalize = 1;
		}

		token = strtok(NULL, separators);
	}

	return str;
}

