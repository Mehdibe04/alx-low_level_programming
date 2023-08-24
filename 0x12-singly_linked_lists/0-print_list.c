#include "lists.h"

/**
 * _strlen - calculates the size of the string
 *
 * @str: the string
 *
 * Return: the size
*/

int _strlen(char *str)
{
	int l = 0;

	while (*str++)
		l++;
	return (l);
}
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
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", (h->len), h->str);
		l++;
		h = h->next;
	}
	printf("-> %u elements\n", l);
	return (l);
}

