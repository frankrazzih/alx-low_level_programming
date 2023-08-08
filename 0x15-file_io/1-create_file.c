#include "main.h"
#include <stdbool.h>

/**
 * create_file - creates a file
 * @filename: name of the file being created
 * @text_content: text to be copied to the file
 * Return: 1 to indicate success else return -1
 */
int create_file(const char *filename, char *text_content)
{
	int x1;
	int x2;
	bool empty;

	if (filename == NULL)
	{
		return (-1);
	}
	if (access(filename, F_OK) == -1)
	{
		empty = true;
	}
	if (empty)
	{
		x1 = open(filename, O_RDWR | O_CREAT | O_APPEND, 0600);
	}
	else if (!empty)
	{
		x2 = open(filename, O_RDWR | O_TRUNC | O_APPEND);
	}
	if (text_content == NULL && empty)
	{
		close(x1);
	}
	else
	{
		close(x2);
	}
	if (empty)
	{
		if (write(x1, text_content, strlen(text_content)) == -1)
		{
			return (-1);
		}
		close(1);
	}
	else if (!empty)
	{
		if (write(x2, text_content, strlen(text_content)) == -1)
		{
			return (-1);
		}
		close(x2);
	}
	return (1);
}

