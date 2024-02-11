#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number if elements in a linked list.
 * @h: pointer to node
 * Return: number of elements or nodes.
 */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
