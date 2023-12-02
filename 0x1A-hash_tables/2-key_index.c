#include "hash_tables.h"

/**
 * key_index - the func gives d ix of a key
 *
 * @key: key to be hshd
 * @size: sz of d arr of d hsh tbl
 *
 * Return: ix where d key/val will be stored in d arr
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ix = hash_djb2(key) % size;

	return (ix);
}
