#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the 2d array
 * @height: height of the array
 * Return: NULL on failure, If width or height is 0 or negative, return NULL
 * or return a pointer to the 2d array.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int w, h, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int
));
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			arr[h][w] = 0;
		}
	}

	return (arr);

}
