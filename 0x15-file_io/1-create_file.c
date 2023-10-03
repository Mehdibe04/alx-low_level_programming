#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: pointer to the filename
 * @text_content: pointer to the text to be written
 *
 * Return: 1 (Success), -1 otherwise
*/

int create_file(const char *filename, char *text_content)
{
	int o, w, l;

	if (filename == NULL)
		return (-1);

	l = 0;
	if (text_content != NULL)
		for (; text_content[l]; l++)
			;
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, l);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
