#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string input
 * @accept: the substring input
 *
 * Return: the index reached
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, len;

	while (s[i])
	{
		j = 0;
		len = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
				len = 1;
			j++;
		}
		if (len == 0)
			return (i);
		i++;
	}
	return (i);
}
