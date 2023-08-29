#include "lists.h"

/**
 * free_listint_safe - frees a listint_t lis
 *
 * @h: pointer to the first node of the list
 *
 * Return: the size of the list
*/

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int d;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		d = *h->n - (*h)->next->n;
		if (d > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
