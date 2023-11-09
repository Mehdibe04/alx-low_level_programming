#include "lists.h"

/**
 * print_dlistint - printg doubly lked list
 * @h: head
 * Return: sz of d list
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *cr = h;
	size_t sz = 0;

	if (!cr)
		return (0);
	while (cr)
	{
		printf("%d\n", cr->n);
		cr = cr->next;
		sz++;
	}
	return (sz);
}
