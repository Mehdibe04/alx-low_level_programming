#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
			putchar(44);
			putchar(32);
		i++;
	}
	putchar('\n');
	return (0);
}
