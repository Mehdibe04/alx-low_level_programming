#include "lists.h"

/**
 * sum_dlistint - sum of all nodes
 *
 * @head: head
 * Return: sum of all nodes
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cr;
	int s = 0;

	cr = head;
	while (cr)
	{
		s += cr->n;
		cr = cr->next;
	}
	return (s);
}
