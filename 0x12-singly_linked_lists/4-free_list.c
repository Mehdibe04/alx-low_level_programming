#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to the head node
 *
 * Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *curr, *next_curr;

	if (!head)
		return;
	curr = head;
	while (curr)
	{
		next_curr = curr->next;
		free(curr->str);
		free(curr);
		curr = next_curr;
	}
}
