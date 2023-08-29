#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: head of the list
 * @n: value of the new node
 *
 * Return: address of the added node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (head == NULL || new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head)
		new->next = *head;
	*head = new;
	return (new);
}
