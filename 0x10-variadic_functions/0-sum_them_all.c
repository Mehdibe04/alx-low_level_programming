#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: number of parameters
 *
 * Return: sum of numbers
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int i, sum = 0;

	va_start(n, args);
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
