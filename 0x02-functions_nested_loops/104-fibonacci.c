#include <stdio.h>

/**
 * numLength - Returns the length of string
 *
 * @n: operand number
 *
 * Return: number of digits
*/

int numLength(int n)
{
	int length = 0;

	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		length += 1;
	}

	return (length);
}

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *              starting with 1 and 2 followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	unsigned long f1 = 1, f2 = 2, f3, f12 = 0, f22 = 0, f32, max = 100000000;
	int i, init0;

	for (i = 1; i <= 98; i++)
	{
		if (f12 > 0)
			printf("%lu", f12);
		init0 = numLength(max) - 1 - numLength(f1);
		while (f12 > 0 && init0 > 0)
		{
			printf("%d", 0);
			init0--;
		}
		printf("%lu", f1);
		f3 = (f1 + f2) % max;
		f32 = f12 + f22 + (f1 + f2) / max;
		f1 = f2;
		f12 = f22;
		f2 = f3;
		f22 = f32;
		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
