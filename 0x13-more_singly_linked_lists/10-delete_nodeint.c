#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 *                           of a listint_t linked list
 *
 * @head: pointer to the first nbode of the list
 * @index: at which the node will be deleted
 *
 * Return: 1 (success), -1 otherwise
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curr, *cur;
	unsigned int i;

	if (!*head)
		return (-1);

	for (i = 0, curr = *head; curr && i <= index; i++, curr = curr->next)
	{
		if (i == index - 1)
			cur = curr;
		else if (i == index)
		{
			cur->next = curr->next;
			free(curr);
			return (1);
		}
	}
	return (-1);
}
