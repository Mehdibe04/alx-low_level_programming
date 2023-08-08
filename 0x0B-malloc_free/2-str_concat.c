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
 * _create_array - creates an array of character
 *
 * @size: the size of the memory to allocate
 *
 * Return: the array created
*/

char *_create_array(unsigned int size)
{
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (!arr)
		return (NULL);
	return (arr);
}

/**
 * str_concat - concatenates two string
 *
 * @s1: the first string input
 * @s2: the second string input
 *
 * Return: the concatenated string
*/

char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, sz_s1, sz_s2;

	if (s1 && s2)
	{
		sz_s1 = _strlen(s1);
		sz_s2 = _strlen(s2);
	}
	else if (s1 == NULL && s2 == NULL)
	{
		sz_s1 = 0;
		sz_s2 = 0;
	}
	else if (s1 == NULL)
	{
		sz_s1 = 0;
		sz_s2 = _strlen(s2);
	}
	else if (s2 == NULL)
	{
		sz_s2 = 0;
		sz_s1 = _strlen(s1);
	}
	s = _create_array(sz_s1 + sz_s2 + 1);
	if (!s)
		return (NULL);
	for (i = 0; i < sz_s1; i++)
		s[i] = s1[i];
	for (j = 0; j < sz_s2; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
