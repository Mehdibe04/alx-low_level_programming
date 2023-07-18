#include <stdio.h>

/**
 * print_alphabet - utilizes on the _putchar function to print
 *                  the alphabet a - z
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}
