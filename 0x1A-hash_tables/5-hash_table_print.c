#include "hash_tables.h"

/**
 * hash_table_print - the func prints a hsh tbl
 *
 * @ht: hsh tbl that will printd
 *
 * Return: Nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int sz, ix, f;
	hash_node_t *curr;

	ix = 0, f = 0;
	if (!ht)
		return;
	sz = ht->sz;

	printf("{");
	while (ix < sz)
	{
		curr = ht->array[ix];
		while (curr)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", curr->key, curr->value);
			f = 1;
			curr = curr->next;
		}
		ix++;
	}
	printf("}\n");
}
