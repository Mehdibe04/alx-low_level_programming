#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: address of the pointer to head node
 *
 * Return: address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (!newNode || !head)
		return (NULL);
	if (str)
	{
		newNode->str = strdup(str);
		if (!newNode->str)
		{
			free(newNode);
			return (NULL);
		}
		newNode->len = _strlen(newNode->str);
	}
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
