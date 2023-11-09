#include "lists.h"

/**
 * insert_dnodeint_at_index - nw node insertion
 * @h: head
 * @idx: post for insertion
 * @n: int input
 *
 * Return: NULL (Failure), Otherwise @ of d nw node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *t = *h, *nw;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		t = t->next;
		if (t == NULL)
			return (NULL);
	}

	if (t->next == NULL)
		return (add_dnodeint_end(h, n));

	nw = malloc(sizeof(dlistint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->prev = t;
	nw->next = t->next;
	t->next->prev = nw;
	t->next = nw;

	return (nw);
}
