#include "lists.h"

/**
 * add_dnodeint - Adds nw node at d begnng
 * @head: head
 * @n: int input
 *
 * Return: NULL (Failure), Otherwise @ of new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *n;

	n = malloc(sizeof(dlistint_t));
	if (n == NULL)
		return (NULL);

	n->n = n;
	n->prev = NULL;
	n->next = *head;
	if (*head != NULL)
		(*head)->prev = n;
	*head = n;

	return (n);
}
