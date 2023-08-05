#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	int res = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c > '9' || *c < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
		res += atoi(argv[argc]);
	}
	printf("%d\n", res);
	return (0);
}
