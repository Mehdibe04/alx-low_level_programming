#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: pointer to the first node
 *
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", _strlen(h->str), h->str);
		h = h->next;
		l++;
	}
	return (l);
}

