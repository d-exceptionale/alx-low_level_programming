#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - counts .the elements in the list
 * @h: pointer to first node
 * Return: number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t num = 0;

	ptr = h;
	while (ptr != NULL)
	{
		num++;
		ptr = ptr->next;
	}
	return (num);
}
