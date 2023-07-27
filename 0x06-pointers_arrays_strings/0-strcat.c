#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 *
 * Return: a pointer to the sting output
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, n = 0;

	while (dest[i])
		n++;

	while (1)
	{
		if (dest[i] == '\0')
			dest[i] = src[i - n];
		if (src[i - n] == '\0')
			break;
	}

	return (dest);

}
