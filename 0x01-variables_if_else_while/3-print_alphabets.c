#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a function that prints the alphabet in lowercase and uppercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'a', ch2 = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (ch2 <= 'Z')
	{
		putchar(ch2);
		ch2++;
	}
	putchar('\n');
	return (0);
}
