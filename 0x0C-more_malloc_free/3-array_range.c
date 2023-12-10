#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers containing all the values
 * from min(included) to max(included), Ordered frm min to max.
 * @min: first num in array
 * @max: last num in array
 * Return: pointer to array or NULL if proccess is unsuccessful
 */

int *array_range(int min, int max)
{
	int *arr;
	int ct = 0, temp;

	if (min > max)
		return (NULL);
	temp = min;
	while (temp <= max)
	{
		temp++;
		ct++;
	}

	arr = malloc(sizeof(int) * ct);
	if (arr == NULL)
		return (NULL);

	temp = 0;
	while (min <= max)
	{
		arr[temp] = min;
		temp++;
		min++;
	}

	return (arr);
}
