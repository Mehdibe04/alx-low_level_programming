#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string of characters input
 *
 * Return: Nothing
*/

void puts_half(char *str)
{
	int i, count = 0;

	while (str[count])
	{
		count++;
	}

	if (count % 2 == 0)
	{
		for (i = count / 2 ; i < count; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = count / 2 + 1 ; i < count; i++)
			_putchar(str[i]);
	}
	_putchar('\n');

}
