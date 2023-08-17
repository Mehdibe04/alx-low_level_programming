#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: string to separate printed strings
 * @n: number of parameters
 * @...: strings to be printed
 *
 * Return: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *s;
	va_list args;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (i--)
		printf("%s%s", (s = va_arg(args, char *)) ? s : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(args);
}
