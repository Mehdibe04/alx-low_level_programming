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

	va_start(args, n);
	while (i--)
	{
		printf("%d", va_arg(args, n));
		if (separator && i == 0)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
