#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: pointer to string destination
 * @src: pointer to string source
 * @n: number of characters to be added to destination
 *
 * Return: a pointer to string output
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, l = 0;

	while (dest[l] != '\0')
		l++;

	while (src[i] != '\0' && i < n)
	{
		dest[l] = src[i];
		i++;
		l++;
	}

	return (dest);
}
