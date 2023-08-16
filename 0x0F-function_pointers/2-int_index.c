#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: given array of ints
 * @size: size of the array
 * @cmp: a given function
 *
 * Return: index of the first int of array for which
 *         cmp does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp size < 0)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
