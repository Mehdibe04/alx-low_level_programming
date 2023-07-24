#include "main.h"

/**
 * puts2 - prints every other character of a string,
 *         starting with the first character
 *
 * @str: string of character input
 *
 * Return: Nothing
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		putchar(*str);
		i += 2;
	}
	_putchar('\n');
}
