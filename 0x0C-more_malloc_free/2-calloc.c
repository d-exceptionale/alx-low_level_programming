#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements in the array
 * @size: size of elements 
 * Return: pointer to allocated memory or NULL if malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	int *a;
	char *b;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (size == 4)
	{
		a = malloc(nmemb * size);
		if (a == NULL)
			return (NULL);

		while (i < nmemb)
		{
			a[i] = 0;
			i++;
		}

		return (a);
	}

	if (size == 1)
	{
		b = malloc(nmemb * size);
		if (b == NULL)
			return (NULL);

		while (i < nmemb)
		{
			b[i] = '\0';
			i++;
		}

		return (b);
	}

	return (NULL);
}
