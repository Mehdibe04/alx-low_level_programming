#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char strg[] = "_putchar";
	int chr;

	for (chr = 0; chr < 8; chr++)
		_putchar(strg[chr]);
	_putchar('\n');

	return (0);
}
