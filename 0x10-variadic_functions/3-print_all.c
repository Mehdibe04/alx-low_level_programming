#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	char *sp = "";

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", sp, s);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
