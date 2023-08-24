#include "lists.h"

/**
 * list_len - determines length of a linked list
 *
 * @h: pointer to first node
 *
 * Return: length of the list
*/

size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		h = h->next;
		l++;
	}
	return (l);
}
