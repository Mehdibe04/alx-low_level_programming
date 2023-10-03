#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 *
 * @filename: a pointer to the name of the file
 * @letters: max num of bytes
 *
 * Return: num of bytes (Success), 0 otherwise
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, o;
	char *b = malloc(sizeof(char) * letters);

	if (!filename)
		return (0);
	if (!b)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, b, letters);
	w = write(STDOUT_FILENO, b, r);

	if (r == -1 || w == -1 || o == -1 || r != w)
	{
		free(b);
		return (0);
	}
	free(b);
	close(o);
	return (w);
}
