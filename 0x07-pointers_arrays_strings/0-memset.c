#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: string input
 * @b: character to be placer a specific number of times
 * @n: the number of times the char b will be typed
 *
 * Return: a pointer to the string
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
