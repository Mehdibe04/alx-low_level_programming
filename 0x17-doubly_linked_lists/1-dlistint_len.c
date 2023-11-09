#include "lists.h"

/**
 * dlistint_len - computg d lgth of a double lkd list
 * @h: head
 * Return: sz of d list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cr = h;
	size_t sz = 0;

	if (!cr)
		return (0);
	while (cr)
	{
		cr = cr->next;
		sz++;
	}
	return (sz);
}
