#include "lists.h"

/**
 * add_dnodeint - adg a node at the bgnng
 * @head: head
 * @n: data
 * Return: ptr 2  new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
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
	n_node->next = *head;

	(*head)->prev = n_node;
	*head = n_node;

	return (n_node);
}
