#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible combinations of two two-digit numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int dig1 = 0;
	int dig2;

	while (dig1 <= 99)
	{
		dig2 = dig1;
		while (dig2 <= 99)
		{
			if (dig1 != dig2)
			{
				putchar((dig1 / 10) + 48);
				putchar((dig2 % 10) + 48);
				putchar(' ');
				putchar((dig2 / 10) + 48);
				putchar((dig2 % 10) + 48);

				if (dig1 + dig2 != 35)
				{
					putchar(',');
					putchar(' ');
				}
			}
			dig2++;
		}
		dig1++;
	}
	putchar('\n');
	return (0);
}