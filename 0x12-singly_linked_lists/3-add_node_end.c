#include "lists.h"

/***/
/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: address of the pointer to head node
 *
 * Return: address of the new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	list_t *curr = *head;

	if (newNode == NULL || head == NULL)
		return (NULL);
	if (str != NULL)
	{
		newNode->str = strdup(str);
		if (newNode->str != NULL)
		{
			free(newNode);
			return (NULL);
		}
		newNode->len = _strlen(newNode->str);
	}
	if (curr != NULL)
	{
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = newNode;
	}
	else
		*head = newNode;
	
	return (newNode);
}
