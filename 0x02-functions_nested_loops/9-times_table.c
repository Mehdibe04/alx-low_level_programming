#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 3, ..
 *
*/

void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			n = i * j;
			_putchar(',');
			_putchar(' ');
			if (n <= 9)
				_putchar(' ');
			else
				_putchar((n / 10) + 48);
			_putchar((n % 10) + 48);
		}
		_putchar('\n');
	}
}
