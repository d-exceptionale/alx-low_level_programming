#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: a double pointer to head node.
 * Return: head node's data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int val;

	if ((*head) == NULL)
		return (0);

	temp = *head;
	val = temp->n;
	*head = (*head)->next;
	free(temp);

	return (val);
}
