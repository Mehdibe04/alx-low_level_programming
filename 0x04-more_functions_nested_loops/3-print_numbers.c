#include "main.h"

/**
 * print_numbers - print from 0 to 9 using _putchar twice
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + 48);
	_putchar('\n');
}
