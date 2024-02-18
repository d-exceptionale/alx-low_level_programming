#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to address of pointer to heaad of node
 * @n: value in node
 * Return: address of new element or NULL if failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	while (temp && temp->next != NULL)
		temp = temp->next;
	if (temp)
		temp->next = new;
	else
		*head = new;

	return (new);
}
