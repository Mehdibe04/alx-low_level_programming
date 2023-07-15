#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all possible different combinations of three digits
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int dig1 = 0, dig2, dig3;

	while (dig1 <= 9)
	{
		dig2 = 0;
		while (dig2 <= 9)
		{
			dig3 = 0;
			while (dig3 <= 9)
			{
				if (dig1 != dig2 && dig2 != dig3 && dig1 < dig2 && dig2 < dig3)
				{
					putchar(dig1);
					putchar(dig2);
					putchar(dig3);
					if (dig1 + dig2 + dig3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				dig3++;
			}
			dig2++;
		}
		dig1++;
	}
	putchar('\n');
	return (0);
}
