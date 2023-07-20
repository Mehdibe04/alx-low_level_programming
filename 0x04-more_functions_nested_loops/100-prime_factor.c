#include <stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
*/

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		qrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_number - finds and prints the largest
 *                        prime factor of the number (num)
 *
 * @num: number to find
*/

void largest_prime_number(long int num)
{
	int prime, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (prime = 3; prime <= _sqrt(num); prime += 2)
	{
		while (num % prime == 0)
		{
			num = num / prime;
			largest = prime;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	largest_prime_number(612852475143);

	return (0);
}
