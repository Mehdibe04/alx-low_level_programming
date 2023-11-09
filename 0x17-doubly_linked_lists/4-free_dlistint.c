#include "lists.h"

/**
 * free_dlistint - Frees a lnkd list
 * @head: head
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
