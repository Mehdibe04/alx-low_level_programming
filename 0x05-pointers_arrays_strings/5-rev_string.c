#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string of characters input
 *
 * Return: Nothing
*/

void rev_string(char *s)
{
	int count = 0;
	int i;
	char tmp;

	while (s[count])
	{
		count++;
	}
	for (i = 0; i < count / 2; i++)
	{
		tmp = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = tmp;
	}
}
