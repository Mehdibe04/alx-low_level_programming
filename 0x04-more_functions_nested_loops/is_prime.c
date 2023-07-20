#include "main.h"

/**
 * is_prime - prints 1 if num is prime, 0 otherwise
 *
 * @num: input of the function
 *
 * Return: 1 if true, 0 otherwise
*/

int is_prime(int num)
{
	if (num <= 1)
		return (0);
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			return (0);
	}
	return (1);
}
