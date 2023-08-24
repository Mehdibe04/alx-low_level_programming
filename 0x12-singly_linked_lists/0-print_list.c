#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: singly linked list
 *
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t l = 0;

	current = list;
	while ( h != NULL)
	{
		l++;
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s", h->len, h->str);
		h = h->next;
	}
	return (l);
}

