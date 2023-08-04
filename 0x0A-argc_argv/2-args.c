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
	while (**argv != '\0')
	{
		printf("%s\n", **argv);
		argv++;
	}
	return (0);
}
