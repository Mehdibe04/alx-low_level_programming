#include "main.h"
#include <stdlib.h>

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
 * _create_array - creates an array of characters
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
 * _strdup - duplicates a given string
 *
 * @str: the string to duplicate
 *
 * Return: the array created
*/

char *_strdup(char *str)
{
	char *new_s;
	int i = 0;

	if (str == NULL)
		return (NULL);
	new_s = _create_array(_strlen(str) + 1);
	if (!new_s)
		return (NULL);
	while (i <= _strlen(str))
	{
		new_s[i] = str[i];
		i++;
	}
	return (new_s);
}
