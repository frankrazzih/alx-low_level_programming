#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: the name of the file
 * @text_content: the text to add to the file
 * Return: 1 if successful else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t x;
	int y;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	y = open(filename, O_WRONLY | O_APPEND, 110110100);
	if (y == -1)
	{
		return (-1);
	}

	x = write(y, text_content, strlen(text_content));
	if (x == -1)
	{
		close(y);
		return (-1);
	}

	close(y);
	return (1);
}

