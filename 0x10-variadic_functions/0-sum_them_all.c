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
	int i = n, sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
	while (i--)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
