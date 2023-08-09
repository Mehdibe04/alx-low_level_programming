#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 *        to make change for an amount of money
 *
 * @argc: Number of arguments
 * @argv: List of arguments
 *
 * Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	int c[] = {25, 10, 5, 2, 1};
	int i = 0, r, co = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	r = atoi(argv[1]);
	if (r < 0)
	{
		printf("0\n");
		return (0);
	}
	while (i < 5)
	{
		if (r == 0)
		{
			printf("%d\n", co);
			return (0);
		}
		if (c[i] <= r)
		{
			r -= c[i];
			co++;
		}
		else
			i++;
	}
	return (0);
}
