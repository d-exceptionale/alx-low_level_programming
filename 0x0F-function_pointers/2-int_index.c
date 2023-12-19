#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: array containing integer
 * @size: size of array
 * @cmp: pointer to the function that can be used to compare values.
 * Return: index of the first element for which the cmp func does not return 0
 * also If no element matches, return -1 and If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, temp;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			temp = cmp(array[i]);
			if (temp != 0)
				return (i);
		}
		return (-1);
	}

	return (-1);
}
