#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid/array
 *
 * @grid: two dimensional grid/array
 * @height: rows
 *
 * Return: Nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
