#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: a pointer to the name of the file to be read
 * @letters: the maximum number of bytes to be read from the file
 *
 * Return: number of bytes read from the file (Success),0 otherwise
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, o;
	char *buff;

	if (!filename)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || r == -1 || w == -1 || r != w)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(o);
	return (w);
}
