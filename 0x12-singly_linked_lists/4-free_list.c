#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to the head of 
 * Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *curr, *next_curr;

	if (head == NULL)
		return;
	curr = head;
	while (curr != NULL)
	{
		next_curr = curr->next;
		free(curr->str);
		free(curr);
		curr = next_curr;
	}
}
