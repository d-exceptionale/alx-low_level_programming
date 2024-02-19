#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: double pointer to first node
 * @idx: index of position where new node will be,starts from 0
 * @n: value of new node
 * Return: return the address of new node or NULL if it failed,
 * if it's not possible to add new node just return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int ct = 0;

	new = *head;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;

	ct = idx - 1;
	while (new && ct > 0)
	{
		new = new->next;
		ct--;
	}

	if (new)
	{
		temp->next = new->next;
		new->next = temp;
		new = new->next;
		return (new);
	}
	else
		return (NULL);
}
