#include "hash_tables.h"

/**
 * hash_table_delete - the func dlts a hsh tbl
 *
 * @ht: d hsh tbl to be dltd
 *
 * Return: Nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x = 0;
	hash_node_t *nd, *tp;

	if (ht == NULL)
		return;

	for (; x < ht->size; x++)
	{
		nd = ht->array[x];
		while (nd != NULL)
		{
			tp = nd;
			nd = nd->next;
			free(tp->key);
			free(tp->value);
			free(tp);
		}
	}
	free(ht->array);
	free(ht);
}
