#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: pointer to a string destination
 * @src: pointer to a string source
 * @n: number of src elements to be copied
 *
 * Return: a pointer to a string output
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}
