#include "lists.h"

/**
 * get_dnodeint_at_index - dnodeint at index objct
 * @head: head
 * @index: index
 *
 * Return: the node in the exact index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cr = head;

	while (index > 0 && cr)
	{
		index--;
		cr = cr->next;
	}
	return (cr);
}
