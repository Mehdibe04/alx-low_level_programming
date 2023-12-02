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
	hash_table_t *hsh_tbl =  malloc(sizeof(hash_table_t));

	if (!hsh_tbl)
		return (NULL);
	hsh_tbl->size = size;
	hsh_tbl->array = malloc(sizeof(hash_node_t *) * size);

	if (!hsh_tbl->array)
	{
		free(hsh_tbl->array);
		return (NULL);
	}
	return (hsh_tbl);
}
