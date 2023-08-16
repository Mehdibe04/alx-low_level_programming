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
	in *e = array + size - 1;

	if (array && cmp && size < 0)
	{
		while (array <= e)
		{
			if (cmp(*array))
				return (array + size - 1 - e);
			array++;
		}
	}
	return (-1);
}
