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

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}

		else
		{
			n = s1[i] - s2[i];
			break;
		}
	}

	if ((s1[i] != '\0' && s2[i] == '\0') || (s1[i] == '\0' && s2[i] != '\0'))
		n = s1[i] - s2[i];

	return (n);
}
