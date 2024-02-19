#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: double pointer to first node
 * @index: index of node to be deleted, index starts from 0
 * Return: 1 if succeeded or -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr;
	unsigned int ct = 1;

	if (*head == NULL)
		return (-1);

	ptr = *head;

	if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	while (ptr && ct < index)
	{
		ptr = ptr->next;
		ct++;
	}

	if (ptr->next)
	{
		temp = ptr->next;
		ptr->next = temp->next;
		free(temp);
		return (1);
	}
	else
		return (-1);
}
