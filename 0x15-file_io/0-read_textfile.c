#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
/**
 * read_textfile - reads a file and outputs it to the stdout
 * @filename: the name of the file being read
 * @letters: the no. of letters to be read
 * Return: the no. of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *text;
	ssize_t x;
	size_t y;

	if (filename == NULL)
	{
		return (0);
	}
	file = fopen(filename, "r");
	if (file == NULL)
	{
		return (0);
	}
	text = malloc(letters);
	if (text == NULL)
	{
		fclose(file);
		return (0);
	}
	if (fgets(text, letters, file) == NULL)
	{
		fclose(file);
		return (0);
	}
	for (y = 0; y <= letters; y++)
	{
		putchar(text[y]);
	}
	x = strlen(text);
	free(text);
	fclose(file);
	return (x);

}
