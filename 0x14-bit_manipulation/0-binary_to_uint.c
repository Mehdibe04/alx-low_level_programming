#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: binary input
 *
 * Return: unsigned integer
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int ud = 0;
	int lg = 0, bin;

	if (!b)
		return (0);

	for (; b[lg] != '\0'; lg++)
		;

	for (lg--, bin = 1; lg >= 0; lg--, bin *= 2)
	{
		if (b[lg] != '0' && b[lg] != '1')
			return (0);

		if (b[lg] & 1)
			ud += bin;
	}

	return (ud);
}
