#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 *
 * @n: first number input
 * @m: second number to be converted
 *
 * Return: num of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	int ct = 0;

	res = n ^ m;
	while (res)
	{
		ct += res & 1;
		res >>= 1;
	}
	return (ct);
}
