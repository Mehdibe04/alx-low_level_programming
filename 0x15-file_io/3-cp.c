#include "main.h"

char *cr_b(char *f);
void cl_f(int fld);

/**
 * cr_b - 1024 bytes allocated for a buffer
 *
 * @f: The name of the buffer
 *
 * Return: pointer to the new buffer
*/

char *cr_b(char *f)
{
	char *b = malloc(sizeof(char) * 1024);

	if (b == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", f);
		exit(99);
	}
	return (b);
}

/**
 * cl_f - it closes the file descriptors
 *
 * @fld: file descriptor
 *
 * Return: Nothing
*/

void cl_f(int fld)
{
	int cn = close(fld);

	if (cn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fld);
		exit(100);
	}
}

/**
 * main - Entry point
 *
 * @ac: num of args
 * @av: array of pointers to the args
 *
 * Return: 0 (Success)
*/

int main(int ac, char *av[])
{
	int fr, tv, rv, wv;
	char *b = cr_b(av[2]);

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fr = open(av[1], O_RDONLY);
	rv = read(fr, b, 1024);
	tv = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fr == -1 || rv == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(b);
			exit(98);
		}
		wv = write(tv, b, rv);
		if (tv == -1 || wv == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(b);
			exit(99);
		}
		rv = read(fr, b, 1024);
		tv = open(av[2], O_WRONLY | O_APPEND);
	} while (rv > 0);
	free(b);
	cl_f(fr);
	cl_f(tv);
	return (0);
}
