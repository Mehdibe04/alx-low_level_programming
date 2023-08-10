#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: the starting value included
 * @max: the last value excluded
 *
 * Return: a pointer to array, NULL otherwise
*/

int *array_range(int min, int max)
{
	int *s, i = 0;

	if (min > max)
		return (NULL);
	s = malloc(sizeof(int) * (max - min + 1));
	if (!s)
		return (NULL);
	while (min <= max)
	{
		s[i] = min;
		min++;
		i++;
	}
	return (s);
}
