#include "main.h"
#include <stdlib.h>

/**
 * __memcpy - copies memory area
 *
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: bytes of memory
 *
 * Return: a pointer to dest
*/

char *__memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the new size, in bytes of the new memory block
 *
 * Return: pointer is worked, NULL otherwise
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (old_size == new_size)
		return (ptr);
	if (!ptr)
	{
		p = malloc(new_size);
		if (!p)
			return (NULL);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (!p)
		return (NULL);
	if (new_size < old_size)
	{
		__memcpy(p, ptr, new_size);
		free(ptr);
		return (p);
	}
	else
	{
		__memcpy(p, ptr, old_size);
		free(ptr);
		return (p);
	}
}

