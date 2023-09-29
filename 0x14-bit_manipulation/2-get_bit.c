#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 *
 * @n: input number to evaluate
 * @index: index starting with zero
 *
 * Return: value of bit at index, -1 in case of error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);

	return ((n >> index) & 1);
}
