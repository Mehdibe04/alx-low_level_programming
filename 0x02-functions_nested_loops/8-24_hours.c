#include "main.h"

/**
 * jack_bauer - prints every minute of the day
*/

void jack_bauer(void)
{
	int min, h;

	for (h = 0; h <= 23; h++)
	{
		for (min = 0; min < 59; min++)
		{
			_putchar(h / 10);
			_putchar(h % 10);
			_putchar(':');
			_putchar(min / 10);
			_putchar(min % 10);
			_putchar('\n');
		}
	}
}
