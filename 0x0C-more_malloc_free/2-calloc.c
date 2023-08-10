#include "main.h"
#include <stdlib.h>

/**
 * __memset - fills memory with a constant byte
 *
 * @s: the buffer in the memory
 * @b: the character to fill the n bytes of memory
 * @n: the len of memory to be filled using _memset
 * 
 * Return: s
*/

char *__memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: the number of elements
 * @size: the size of each element
 *
 * Return: if everything works ptr, NULL otherwise
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	__memset(p, 0, nmemb * size);
	return (p);
}
}
