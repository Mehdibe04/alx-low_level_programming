#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 *                      using _putchar twice
 *
 * Return : Always 0 (Success)
*/

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
			_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}
