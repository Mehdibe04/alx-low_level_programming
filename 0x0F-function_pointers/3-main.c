#include "3-calc.h"

/**
 * main - perfroms simple operations
 *
 * @ac: number of arguments
 * @av: list of arguments
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int a, b, res;
	char op;
	int (*func_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func_op = get_op_func(argv[2]);

	if (func_op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	op = *argv[2];

	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = func(a, b);

	printf("%d\n", res);

	return (0);
}
