#include "lists.h"

/***/

size_t list_len(const list_t *h)
{
	list_t *current, *head;
	size_t l;

	current->next = head;
	while (current->next != NULL)
	{
		l++;
		current = current->next;
	}
	return (l);
}
