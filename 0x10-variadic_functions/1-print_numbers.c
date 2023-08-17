#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: string between ints
 * @n: number of arguments
 * @...: the ints to print
 *
 * Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i + 1 != n)
			printf("%d%s", va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));
	}
	va_end(args);
	printf("\n");
}
