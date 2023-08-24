#include "lists.h"

/**
 * _strlen - calculates the size of the string
 *
 * @str: the string
 *
 * Return: the size
*/

int _strlen(char *str)
{
	int l = 0;

	while (*str++)
		l++;
	return (l);
}
