#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: columns
 * @height: rows
 *
 * Return: a pointer to a 2 dimensional array of integers
*/

int **alloc_grid(int width, int height)
{
	int **g, co, ro;

	if (width <= 0 || height <= 0)
		return (NULL);
	g = malloc(height * sizeof(int *));

	if (!g)
	{
		free(g);
		return (NULL);
	}

	for (ro = 0; ro < height; ro++)
	{
		g[ro] = malloc(width * sizeof(int));

		if (!g[ro])
		{
			for (co = 0; co < ro; co++)
			{
				free(g[co]);
			}
			free(g);
			return (NULL);
		}
		for (co = 0; co < width; co++)
			g[ro][co] = 0;
	}
	return (g);
}
