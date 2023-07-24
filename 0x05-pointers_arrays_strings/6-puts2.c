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
	if (*str != '\0' && *(str + 1) == '\0')
	{
		_putchar(*str);
	else
		str += 2
		while (*str && *(str + 1))
		{
			_putchar(*str);
			str += 2;
	}
	_putchar('\n');
}
