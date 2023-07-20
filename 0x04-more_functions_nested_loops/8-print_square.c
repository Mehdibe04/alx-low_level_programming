#include "main.h"

/**
 * print_square - prints a square using the character #
 *
 * @size: is the number of times the character #
 *        should be printed
 *
 * Return: Always 0 (Success)
*/

void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
		_putchar('\n');
	else
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
}
