#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements of the array
 * return: nothing
 */

void reverse_array(int *a, int n)
{
	int count, temp;

	count = 0;
	temp = n - 1;

	while (count < n)
	{
		if (count != n - 1)
			printf("%d, ", a[temp]);
		else
			printf("%d", a[temp]);
		count++;
		temp--;
	}
}
