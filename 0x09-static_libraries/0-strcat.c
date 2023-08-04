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

	while (dest[n])
		n++;

	while (src[i] != '\0')
	{
		dest[n] = src[i];
		n++;
		i++;
	}

	return (dest);

}
