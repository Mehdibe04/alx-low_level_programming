#include <stdlib.h>
#include "main.h"

/**
 * __strlen - returns the length of a given string
 *
 * @s: string input
 *
 * Return: the length of given string
*/

int __strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * _strcpy - copies a string from src to dest
 *
 * @dest: the string to copy to
 * @src: the string to copy from
 * @n: the index to start from
 *
 * Return: dest the string the has src content
*/

void _strcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (src[i])
	{
		dest[n] = src[i];
		n++;
		i++;
	}
}

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes to get from s2
 *
 * Return: the string containing s1 concatenated with s2.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int l;
	unsigned int i = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	l = __strlen(s1);
	s = malloc(l + n + 1);
	if (!s)
		return (NULL);
	_strcpy(s, s1, 0);
	while (i < n)
	{
		s[l] = s2[i];
		l++;
		i++;
	}
	s[l] = '\0';
	return (s);
}
