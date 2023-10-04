#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: NONE, on failure or if either width/height <= 0.
 * Pointer to array otherwise.
 */
int **alloc_grid(int width, int height)
{
	int **grid, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	x = 0, y = 0;
	for (y = 0; y < height; y++)
	{
		grid[y] = malloc(sizeof(int) * width);
		if (grid[y] == NULL)
		{
			for (; y >= 0; y--)
			{
				free(grid[y]);
			}
			free(grid);

			return (NULL);
		}

		for (x = 0; x < width; x++)
		{
			grid[y][x] = 0;
		}
	}

	return (grid);
}
