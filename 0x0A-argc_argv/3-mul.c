#include <stdio.h>

/**
 * main - multiplies two numbers
 *
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", argv[1] * argv[2]);
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
}
