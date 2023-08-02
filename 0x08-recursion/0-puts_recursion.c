#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s: string to be printed
 *
 * Return: Nothing
*/

void _puts_recursion(char *s)
{
	_putchar(*s);
	_puts_recursion(s++);
	if (*s == '\0')
		_putchar('\n');
}
