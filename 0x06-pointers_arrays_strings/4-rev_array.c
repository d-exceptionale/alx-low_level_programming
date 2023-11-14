#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements of the array
 * return: nothing
 */

void reverse_array(int *a, int n)
{
	int temp, ct;

	ct = 0;

	while (ct < n / 2)
	{
		temp = a[ct];
		a[ct] = a[n - 1 - ct];
		a[n - 1 - ct] = temp;
		ct++;
	}

}
