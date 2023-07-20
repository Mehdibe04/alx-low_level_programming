#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
				_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
