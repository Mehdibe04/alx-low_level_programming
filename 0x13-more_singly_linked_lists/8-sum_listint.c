#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: pointer to the first node of the list
 *
 * Return: the sum
*/

int sum_listint(listint_t *head)
{
	listint_t *curr;
	int sum = 0;

	if (!head)
		return (0);
	curr = head;
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
