#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: A pointer to the filename
 * @text_content: string to be added at the end
 *
 * Return: If failure -1
 *         If file does not exist -1
 *         1 otherwise
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int ov, wv, lv;

	if (filename == NULL)
		return (-1);
	lv = 0;
	if (text_content != NULL)
		for (; text_content[lv]; lv++)
			;
	ov = open(filename, O_WRONLY | O_APPEND);
	wv = write(ov, text_content, lv);

	if (ov == -1 || wv == -1)
		return (-1);
	close(ov);
	return (1);
}
