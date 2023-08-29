#include "lists.h"

/***/

size_t print_listint(const listint_t *h)
{
	listint_t *curr;
	size_t count = 0;

	curr = h;
	while (h != NULL)
	{
		count++;
		printf("%d", curr->n);
		curr = curr->next;
	}
	return (count);
}
