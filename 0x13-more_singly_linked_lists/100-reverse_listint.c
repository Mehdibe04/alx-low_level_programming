#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 *
 * @head: pointer to the first node
 *
 * Return: pointer to the first element of the list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr;

	if (!head || !*head)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	curr = *head;
	*head = curr->next;
	curr->next = NULL;
	(*head)->next = curr;

	while (curr)
	{
		curr = *head;
		*head = curr->next;
		if ((*head)->next == NULL)
		{
			(*head)->next = curr;
			return (*head);
		}
		(*head)->next = curr;
	}
	return (*head);

}
