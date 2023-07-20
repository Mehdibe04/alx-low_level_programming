#include "main.h"

/**
 * print_line - prints a straight line
 *
 * @n: is the numbers of times the _ character should
 *     be printed
*/

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
