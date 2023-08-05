#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 (Success), non-zero (Fail)
*/

int main(int argc, char *argv[])
{
	int res;

	if (argc == 3)
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
