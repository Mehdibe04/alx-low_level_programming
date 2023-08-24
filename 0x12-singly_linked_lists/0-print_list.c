#include <lists.h>

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
	list_t *current, *head;

	current = list;
	while (current->next != NULL)
	{
		l++;
		if (current->str == NULL)
			printf("[0] (nil)");
		else
			printf("%s", current->str);
		current = current->next;
	}
	return (l);
}

