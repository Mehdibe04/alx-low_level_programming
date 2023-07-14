#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all digit numbers of base 10 using putchar
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
