#include "lists.h"

/***/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr, *tmp;
	listint_t *new = malloc(sizeof(listint_t));
	int i;

	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;




}
