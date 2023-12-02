#include "hash_tables.h"

/**
 * hash_djb2 - the func implements d djb2 algo
 *
 * @str: str gnrtng hsh val
 *
 * Return: val of hash
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh = 5381;
	int ch;

	while ((ch = *str++))
		hsh = ((hsh << 5) + hsh) + ch;
	return (hsh);
}
