#include "main.h"

/**
 * is_prime_number - checks if n is prime
 *
 * @n: number to be checked
 *
 * Return: 1 if prime, 0 otherwise.
*/

int check_if_divisible(int n, int i);
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	return (check_if_divisible(n, 3));
}

/**
 * check_if_divisible - checks if n is prime
 *
 * @n: the number to be checked
 * @i: odd number to check if n is divisible by
 *
 * Return: 1 if prime, 0 otherwise
*/

int check_if_divisible(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_if_divisible(n, i + 2));
}
