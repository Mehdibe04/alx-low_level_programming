#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i = 0, j = 0;

	while (i <= 9)
	{
		while (i <= 14)
		{
			if (i >= 10)
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
