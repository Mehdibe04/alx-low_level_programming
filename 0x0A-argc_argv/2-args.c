#include <stdio.h>

/**
 * main - prints all arguments it received
 *
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 (Success)
*/

int main(int argc, char const **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", **argv);
		argv++;
	}
	return (0);
}
