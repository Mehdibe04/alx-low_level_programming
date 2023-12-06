#include "hash_tables.h"

/**
 * hash_table_get -  the func rtrievs a val associatd with key
 *
 * @ht: hsh tbl to look into
 * @key: key 2 lk for
 *
 * Return: val associatd with d ele, or NULL if key not found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int dx, sz;
	hash_node_t *curr;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	sz = ht->sz;
	dx = key_index((unsigned char *)key, sz);
	curr = ht->array[dx];
	while (curr)
	{
		if (strcmp(curr->key, key) ==  0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}
