#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 *
 * @b: buffer
 * @size: size of buffer
 *
 * Return: Nothing
*/

void print_buffer(char *b, int size)
{
	int i, j, n;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%.8x:", i);
			for (j = i; j < i + 10; j++)
			{
				if (j % 2 == 0)
					printf(" ");
				if (j < size)
					printf("%.2x", *(b + j));
				else
					printf("  ");
			}
			printf(" ");
			for (n = i; n < i + 10; n++)
			{
				if (n >= size)
					break;
				if (*(b + n) < 32 || *(b + n) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + n));
			}
			printf("\n");
		}
	}
}
