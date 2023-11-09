#include "lists.h"

/**
 * add_dnodeint_end - addg a node at d end
 * @head: head
 * @n: data
 *
 * Return: ptr to d new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *cr;
	dlistint_t *n_node = malloc(sizeof(dlistint_t));

	if (!n_node)
		return (NULL);

	n_node->prev = NULL;
	n_node->n = n;
	n_node->next = NULL;

	if (!*head)
	{
		*head = n_node;
		return (n_node);
	}
	cr = *head;

	while (cr->next)
		cr = cr->next;

	cr->next = n_node;
	n_node->prev = cr;

	return (n_node);
}
