#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: pointer to the first node of the list
 *
 * Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *curr, *tmp;

	curr = *head;
	while (curr)
	{
		tmp = curr;
		curr = curr->next;
		free(tmp);
	}
	*head = NULL;
}
