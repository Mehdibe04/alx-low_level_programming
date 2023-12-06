#include "hash_tables.h"

/**
 * hash_table_create - the func creates a hshtable
 *
 * @size: d sz of d hshtbl
 *
 * Return: hshtbl if created succesfully, NULL otherwise
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;

	hash_t = malloc(sizeof(hash_table_t));
	if (!hash_t)
		return (NULL);
	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);

	if (!hash_t->array)
	{
		free(hash_t->array);
		return (NULL);
	}
	return (hash_t);
}
