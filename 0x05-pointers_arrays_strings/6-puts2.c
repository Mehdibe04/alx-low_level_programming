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
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
