#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: first int parameter
 * @b: second parameter
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int i = *b;

	*a = *b;
	*b = i;
}
