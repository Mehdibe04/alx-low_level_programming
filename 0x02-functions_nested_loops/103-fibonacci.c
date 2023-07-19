#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the sum of even-valued terms of
 *              Fibonacci sequence under 4000000
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long fibO = 0, fibC = 1, fibN, sum = 0;

	while (fibN < 4000000)
	{
		fibN = fibO + fibC;
		if (fibN % 2 == 0)
			sum += fibN;
		fibO = fibC;
		fibC = fibN;
	}
	printf("%ld\n", sum);
	return (0);
}
