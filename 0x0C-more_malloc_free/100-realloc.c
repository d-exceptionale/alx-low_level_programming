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
	char *b;
	unsigned int i = 0;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		b = malloc(new_size);
		if (b == NULL)
			return (NULL);
		return (b);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	b = malloc(new_size);
	if (b == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (; i < old_size && i < new_size; i++)
		b[i] = ((char *)ptr)[i];
	free(ptr);
	return (b);
}
