#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint -  prtints all the elements of a listint_t list.
 * @h: pointer to head of node
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t num = 0;

	ptr = h;

	while (ptr != NULL)
	{
		num++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}

	return (num);
}
