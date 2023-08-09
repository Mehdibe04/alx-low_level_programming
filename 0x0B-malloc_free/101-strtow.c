#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a given string
 *
 * @s: string input
 *
 * Return: the length of given string
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * _strncpy - copies n bytes from src to dest
 *
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes
 *
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		while (dest[i])
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

/**
 * isspace - checks if character is space
 *
 * @c: char input
 *
 * Return: the integer value of char
*/

int isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' ||
			c == '\v' || c == '\f' || c == '\r');
}

/**
 * count_words - counts words in a given string
 *
 * @str: the string to count words from
 *
 * Return: the number of words
*/

int count_words(char *str)
{
	int c = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			c++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	if (c == 0 && _strlen(str) == 1 && str[0] == ' ')
		c = 0;
	return (c);
}

/**
 * strtow - splits a string into words
 *
 * @str: the string to split
 *
 * Return: the pointer to an array containing words
*/

char **strtow(char *str)
{
	int n, i = 0, j = 0, st, e, wlen;
	char *w;
	char **wo;

	if (str == NULL || _strlen(str) == 0 || count_words(str) == 0)
		return (NULL);
	n = count_words(str);
	wo = malloc(sizeof(char *) * (n + 1));
	if (wo == NULL)
		return (NULL);
	while (str[i] != '\0' && j < n)
	{
		st = i;
		while (str[i] != ' ' && str[i] != '\0')
			i++;
		e = i;
		wlen = e - st;
		if (wlen > 0)
		{
			w = malloc(sizeof(char) * (wlen + 1));
			if (w == NULL)
				return (NULL);
			_strncpy(w, str + st, wlen);
			w[wlen] = '\0';
			wo[j] = w;
			j++;
		}
		else
			i++;
	}
	wo[j] = NULL;
	return (wo);
}
