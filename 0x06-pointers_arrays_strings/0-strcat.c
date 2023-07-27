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
	int i = 0;
	int n = strlen(dest);

	while (1)
	{
		if (dest[i] == '\0')
			dest[i] = src[i - n];
		if (*src == '\0')
			break;
	}

	return (dest);

}
