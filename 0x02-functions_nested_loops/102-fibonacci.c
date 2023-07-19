#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the first 50 fibonacci numbers
 *              starting with 1 and 2 followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long fib_o = 0, fib_c = 1, fib_n;
	int i = 0;

	while (i < 50)
	{
		fib_n = fib_o + fib_c;
		printf("%d, ", fib_n);
		fib_o = fib_c;
		fib_c = fib_n;
		i++;
	}
	printf("%d\n", fib_c + fib_n);
	return (0);
}
