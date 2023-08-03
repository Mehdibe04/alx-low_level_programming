#include "main.h"

/**
 * _sqrt_recursion - finds natural square root
 *
 * @n: number to be checked
 * @i: square root
 *
 * Return: square root of n
*/

int square(int n, int i);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - finds square root
 *
 * @n: number to be checked
 * @i: square root
 *
 * Return: square root of n
*/

int square(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (square(n, i + 1));
	else
		return (-1);
}
