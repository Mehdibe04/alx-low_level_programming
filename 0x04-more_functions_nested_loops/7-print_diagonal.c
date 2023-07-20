#include "main.h"

/**
 * print_diagonal - prints diagonal line
 *
 * @n: is the number of time the character \ should
 *     be printed
*/

void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar(92);
		_putchar('\n');
		i++;
	}

	if (n <= 0)
		_putchar('\n');
}
