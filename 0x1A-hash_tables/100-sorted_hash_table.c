#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Crts a srtd hshtbl.
 * @size: d sz of nw srtd hshtbl.
 *
 * Return: If an err occ - NULL.
 *         othws - a ptr to d nw srtd hshtbl.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *htt;
	unsigned long int x;

	htt = malloc(sizeof(shash_table_t));
	if (htt == NULL)
		return (NULL);

	htt->size = size;
	htt->array = malloc(sizeof(shash_node_t *) * size);
	if (htt->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		htt->array[x] = NULL;
	htt->shead = NULL;
	htt->stail = NULL;

	return (htt);
}

/**
 * shash_table_set - Adds an element to a srtd hshtbl.
 * @ht: A ptr to d srtd hshtbl.
 * @key: d key to add - cannot be an empty string.
 * @value: d value associated with key.
 *
 * Return: Upon failure - 0.
 *         othws - 1.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *nw, *tp;
	char *value_copy;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
	tp = ht->shead;
	while (tp)
	{
		if (strcmp(tp->key, key) == 0)
		{
			free(tp->value);
			tp->value = value_copy;
			return (1);
		}
		tp = tp->snext;
	}

	nw = malloc(sizeof(shash_node_t));
	if (nw == NULL)
	{
		free(value_copy);
		return (0);
	}
	nw->key = strdup(key);
	if (nw->key == NULL)
	{
		free(value_copy);
		free(nw);
		return (0);
	}
	nw->value = value_copy;
	nw->next = ht->array[indx];
	ht->array[indx] = nw;

	if (ht->shead == NULL)
	{
		nw->sprev = NULL;
		nw->snext = NULL;
		ht->shead = nw;
		ht->stail = nw;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		nw->sprev = NULL;
		nw->snext = ht->shead;
		ht->shead->sprev = nw;
		ht->shead = nw;
	}
	else
	{
		tp = ht->shead;
		while (tp->snext != NULL && strcmp(tp->snext->key, key) < 0)
			tp = tp->snext;
		nw->sprev = tp;
		nw->snext = tp->snext;
		if (tp->snext == NULL)
			ht->stail = nw;
		else
			tp->snext->sprev = nw;
		tp->snext = nw;
	}

	return (1);
}

/**
 * shash_table_get - Retrieve d value associated with
 *                   a key in a srtd hshtbl.
 * @ht: A ptr to d srtd hshtbl.
 * @key: d key to get d value of.
 *
 * Return: If d key cannot be matched - NULL.
 *         othws - d value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *nod;
	unsigned long int indx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	indx = key_index((const unsigned char *)key, ht->size);
	if (indx >= ht->size)
		return (NULL);

	nod = ht->shead;
	while (nod != NULL && strcmp(nod->key, key) != 0)
		nod = nod->snext;

	return ((nod == NULL) ? NULL : nod->value);
}

/**
 * shash_table_print - Prints a srtd hshtbl in order.
 * @ht: A ptr to d srtd hshtbl.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *nod;

	if (ht == NULL)
		return;

	nod = ht->shead;
	printf("{");
	while (nod != NULL)
	{
		printf("'%s': '%s'", nod->key, nod->value);
		nod = nod->snext;
		if (nod != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a srtd hshtbl in reverse order.
 * @ht: A ptr to d srtd hshtbl to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *nod;

	if (ht == NULL)
		return;

	nod = ht->stail;
	printf("{");
	while (nod != NULL)
	{
		printf("'%s': '%s'", nod->key, nod->value);
		nod = nod->sprev;
		if (nod != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a srtd hshtbl.
 * @ht: A ptr to d srtd hshtbl.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *hdd = ht;
	shash_node_t *nod, *tp;

	if (ht == NULL)
		return;

	nod = ht->shead;
	while (nod)
	{
		tp = nod->snext;
		free(nod->key);
		free(nod->value);
		free(nod);
		nod = tp;
	}

	free(hdd->array);
	free(hdd);
}
