#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: pointer to the first node of the list
 *
 * Return: returns the head node’s data (n)
*/

int pop_listint(listint_t **head)
{
	listint_t *curr;
	int num;

	if (!head || !*head)
		return (0);

	curr = *head;
	num = (*head->)n;
	*head = (*head)->next;
	free(curr);
	return (num);
}
