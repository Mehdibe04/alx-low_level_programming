#include "lists.h"

/***/

list_t *create_node(list_t **head, const char *str)
{
	list_t *newNode;
	insigned int len = strlen(str);

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = len;
	*head = newNode->next;
	return (newNode);
}

/***/

list_t *add_node(list_t **head, const char *str)
{
	list_t newNode;

	newNode = create_node(head, str);
	newNode->next = *head;
	*head = newNode;
	if (newNode == NULL)
		return (NULL);
	else
		return (*head);
}
