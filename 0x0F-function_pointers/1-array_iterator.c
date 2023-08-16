#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 *
 * @array: given array
 * @size: size of the array
 * @action: pointer to the function to be executed
 *
 * Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *e = array + size - 1;

	if (array && action && size)
	{
		while (array <= e)
			action(array*array++);
	}
}
