#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string
 * @accept: substring
 *
 * Return: a pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j, len;

	while (s[i])
	{
		j = 0;
		len = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				len = 1;
			j++;
		}
		if (len == 1)
			return (s + i);
		i++;
	}
	return ('\0');
}
