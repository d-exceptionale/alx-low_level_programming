#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to node
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *temp;

	ptr = head;
	while (ptr->next != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}

	free(ptr);
}
