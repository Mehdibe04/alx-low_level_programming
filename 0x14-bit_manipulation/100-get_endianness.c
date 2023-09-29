#include "main.h"

/**
 * get_endianness - func that checks the endianness
 *
 * Return: 0 if big endian, 1 if little
*/

int get_endianness(void)
{
	unsigned int pes = 1;
	char *s;

	s = (char *) &pes;
	return ((int)*s);
}
