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
 * argstostr - concatenates the arguments to string
 *
 * @ac: number of arguments
 * @av: list of arguments
 *
 * Return: a pointer to a arguments
*/

char *argstostr(int ac, char **av)
{
	int l = 0, i = 0, j = 0, inds = 0, ind;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		l += _strlen(av[i]);
		i++;
		l++;
	}
	str = malloc(sizeof(char) * l + 1);
	if (!str)
		return (NULL);
	while (j < ac)
	{
		ind = 0;
		while (av[j][ind])
		{
			str[inds] = av[j][ind];
			inds++;
			ind++;
		}
		j++;
		str[inds] = '\n';
		inds++;
	}
	return (str);
}
