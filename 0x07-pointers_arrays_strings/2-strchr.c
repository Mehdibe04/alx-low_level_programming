#include  "main.h"

/**
 * _strchr -  locates a character in a string
 *
 * @s: pointer to a buffer
 * @c: first occurrence of the character
 *
 * Return: pointer to the position of c in s
*/

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
