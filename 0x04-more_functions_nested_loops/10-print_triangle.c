#include "main.h"

/**
 * print_triangle - prints a triangle of # character
 *
 * @size: is the number of the character # that should
 *        be printed
*/

void print_triangle(int size)
{
	int i = 0, j, k;

	if (n <= 0)
		_putchar('\n');
	else
		while (i < size)
		{
			j = 0;
			while (j < size - i - 1)
			{
				_putchar(' ');
				j++;
			}
			k = 0;
			while (k <= i)
			{
				_putchar('#');
				k++;
			}
			_putchar('\n');
			i++;
		}
}
