#include "hash_tables.h"

/**
 * hash_table_set - the func adds an ele to d hsh tbl
 *
 * @ht: hsh tbl to be updated
 * @key: key to be added
 * @value: val associatd with d key
 *
 * Return: 1 (success), 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n;
	char *valcp;
	unsigned long int ix, x;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	valcp = strdup(value);
	if (valcp == NULL)
		return (0);
	ix = key_index((const unsigned char *)key, ht->size);
	for (x = ix; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = valcp;
			return (1);
		}
	}
	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(valcp);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (0);
	}
	n->value = valcp;
	n->next = ht->array[ix];
	ht->array[ix] = n;
	return (1);
}
