#include "main.h"
#define buffsize 1024
/**
 * transfer - Transfer content from one file to another
 * @file_from: Source file name
 * @file_to: Destination file name
 */
void transfer(const char *file_from, const char *file_to)
{
	int x, tagf, srcf, x1, x2;
	char *buffer = malloc(buffsize);
	ssize_t byt_r, byt_wr;
	mode_t permissions = umask(0);

	x = access(file_to, F_OK);
	if (x == -1)
	{
		tagf = open(file_to, O_WRONLY | O_CREAT, 0664);
	}
	else
	{
		tagf = open(file_to, O_WRONLY | O_TRUNC);
	}
	srcf = open(file_from, O_RDONLY);
	if (srcf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	while ((byt_r = read(srcf, buffer, buffsize)) != 0)
	{
		if (byt_r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		if ((byt_wr = write(tagf, buffer, byt_r)) == 0)
		{
			x1 = close(srcf);
			x2 = close(tagf);
			if (x1 == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", srcf);
				exit(100);
			}
			else if (x2 == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tagf);
				exit(100);
			}
		}
		if (byt_wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s", file_to);
		}
	}
	umask(permissions);
	free(buffer);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, otherwise an exit code
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	transfer(argv[1], argv[2]);
	return (0);
}

