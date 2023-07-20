#include "main.h"

/**
 * size_num - returns thenumber of digits of a number
 *
 * @n: input number
 *
 * Return: size
*/

int size_num(int n)
{
	int size = 0;

	if (n < 0)
		n = n * (-1);

	while (n / 10 != 0)
	{
		size++;
		n = n / 10;
	}

	if (n < 10 && n >= 0)
		size++;

	return (size);
}

/**
 * print_number - prints a number
 *
 * @n: input number
*/

void print_number(int n)
{
	int i, m;
	int s = size_num(n);
	int size_c = s;

	for (i = 0; i < s; i++)
	{

		if (n < 0)
		{
			n = (-1) * n;
			_putchar(45);
		}

		if (size_c == 1)
		{
			_putchar(n + 48);
			break;
		}

		m = n / (int)pow(10, size_c - 1);
		_putchar(m + 48);
		n = n % (int)pow(10, size_c - 1);
		size_c--;
	}
}
