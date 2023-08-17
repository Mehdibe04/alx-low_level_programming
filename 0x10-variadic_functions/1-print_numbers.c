#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: string between ints
 * @n: number of arguments
 *
 * Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i = n;

	if (n == NULL)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (i--)
		printf("%d%s", va_arg(args, int),
				i ? (separator ? separator : "") : "\n");
	va_end(args);
}
