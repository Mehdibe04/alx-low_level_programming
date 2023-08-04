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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", **argv);

	return (0);
}
