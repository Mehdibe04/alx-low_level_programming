#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *
 * @dest: the destination array where the string will be copied
 * @src: the source from where the string will be copied
 *
 * Return: destination array dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i])

	return (dest);
}
