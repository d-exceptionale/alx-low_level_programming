#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory using malloc and free.
 * @ptr: is a pointer to memory previously allocated with a call to malloc.
 * @old_size: size in bytes of the allocated space for ptr.
 * @new_size: new size in bytes of the new memory block.
 * Return: pointer to newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char **b;
	unsigned int arr_size, i = 0;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
	}
	if (old_size == new_size)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		arr_size = old_size / sizeof(char);
		b = malloc(new_size);
		if (b == NULL)
		{
			free(ptr);
			return (NULL);
		}
		for (; i < arr_size; i++)
			b[i] = (char *)ptr + i;
		free(ptr);
		return (b);
	}

	free(ptr);
	return (NULL);
}
