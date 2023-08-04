#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: string output
 * @src: string to be copied
 * @n: length of src to be copied
 *
 * Return: a pointer to the final string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
