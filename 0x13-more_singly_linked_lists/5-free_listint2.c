#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list, sets the head to NULL.
 * @head: pointer to address of pointer to string
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *ptr;

	if (head == NULL)
		return;

	ptr = *head;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		ptr = temp;
	}

	*head = NULL;
}
