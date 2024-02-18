#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all of the data (n) of a listint_t linked list
 * @head: pointer to first node of list
 * Return: sum of list or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int ct = 0;

	if (head == NULL)
		return (0);

	ptr = head;

	while (ptr)
	{
		ct = ct + ptr->n;
		ptr = ptr->next;
	}

	return (ct);
}
