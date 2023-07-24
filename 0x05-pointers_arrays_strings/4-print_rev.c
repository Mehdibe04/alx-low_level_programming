#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: string parameter input
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	int count  = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	for (count; count > 0; count--)
		_putchar(*--s);
	_putchar('\n');
}
