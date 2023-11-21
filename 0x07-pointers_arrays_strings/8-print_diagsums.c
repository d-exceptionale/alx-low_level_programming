#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers.
 * @a: 2d array
 * @size: the array size
 * Return: nothing!
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum1 = a[i] + sum1;

	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		sum2 = a[j] + sum2;
	printf("%d, %d\n", sum1, sum2);
}
