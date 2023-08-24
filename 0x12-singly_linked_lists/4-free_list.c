#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: pointer to the head of */

void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node->str);
		free(node);
	}
}
