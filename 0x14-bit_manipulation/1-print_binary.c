#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the number to be printed in binary
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int sh;

	if (n == 0)
	{
		printf("0");
		return;
	}
	num = n;
	sh = 0;

	while ((num >>= 1) > 0)
		sh++;

	while (sh >= 0)
	{
		if ((n >> sh) & 1)
			printf("1");
		else
			printf("0");
		sh--;
	}
}
