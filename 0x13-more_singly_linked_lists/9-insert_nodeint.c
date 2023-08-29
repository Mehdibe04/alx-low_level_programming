#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: pointer to the first node of the list
 * @idx: index in which the new node will be added
 * @n: the data of the new node
 *
 * Return: the address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr, *tmp;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i;

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (curr = *head, i = 0; i < idx - 1 && curr; curr = curr->next, i++)
		;

	if (i != idx - 2)
		return (NULL);

	if (curr->next)
		tmp = curr->next;
	curr->next = new;
	new->next = tmp;
	return (new);
}
