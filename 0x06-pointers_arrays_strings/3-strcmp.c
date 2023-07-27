#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string input
 * @s2: second string input
 *
 * Return: the difference of their ascii codes
*/

int _strcmp(char *s1, char *s2)
{
	int n = 0, i = 0;

	while (1)
	{
		if (s1[i] == s2[i])
		{
			if (s1[i] != '\0')
				continue;
			else
				break;
		}

		else
		{
			n = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (n);
}
