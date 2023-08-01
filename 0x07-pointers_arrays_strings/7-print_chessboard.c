#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: 2d array to be printed
 *
 * Return: Nothing
*/

void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
