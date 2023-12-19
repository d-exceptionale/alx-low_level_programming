#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * of the array.
 * @array: array for function to be executed on.
 * @size: size of array, i.e num of elements in array
 * @action: pointer to function containing action to be done on array.
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size && action != NULL)
	{
		
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
