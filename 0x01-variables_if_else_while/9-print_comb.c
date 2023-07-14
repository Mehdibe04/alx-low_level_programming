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

	while (i < 57)
		putchar(i);
		putchar(44);
		putchar(32);
		i++;
	putchar(57);
	return (0);
}
