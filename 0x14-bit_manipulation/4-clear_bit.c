#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: pointer input
 * @index: index input
 *
 * Return: 1 (Success), -1 Otherwise
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int pes;

	if (index > 63)
		return (-1);
	pes = 1 << index;

	if (*n & pes)
		*n = *n ^ pes;
	return (1);
}
