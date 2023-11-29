#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2d grid
 * @grid: the 2d grid array
 * @height: height of grid
 * Return: nothing!
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);

	free(grid);
}
