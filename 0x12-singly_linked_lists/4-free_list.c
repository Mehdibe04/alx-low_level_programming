#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to the head of 
 * Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *curr;

	while (head)
	{
		curr = head;
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
