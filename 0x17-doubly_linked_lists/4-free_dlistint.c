#include "lists.h"

/**
 * free_dlistint - freeing a list
 *
 * @head: head
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *st = head, *nxt;

	while (st)
	{
		nxt = st->nxt;
		free(st);
		st = nxt;
	}
}
