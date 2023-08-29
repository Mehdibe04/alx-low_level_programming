#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: pointer to the first node of the list
 * @index: the nth node that will be returned
 *
 * Return: the nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr;
	int i;

	for (i = 0, curr = head; curr && i < index; i++, curr = curr->next)
		;
	return (curr);
}
