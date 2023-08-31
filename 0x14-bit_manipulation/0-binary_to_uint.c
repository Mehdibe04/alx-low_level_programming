#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int
 *
 * @b: A pointer to the binary string
 *
 * Return: The unsigned int value of the binary string
 *         or 0 if b is NULL or if b contains non-'0'/'1' characters
 */

unsigned int binary_to_uint(const char *b)
{
	int n = 0;
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	for (; b[n]; n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
		res = (res << 1) + (b[n] - '0');
	}
	return (res);
}
