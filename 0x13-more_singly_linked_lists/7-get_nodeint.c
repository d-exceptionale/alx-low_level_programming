#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to first node
 * @index: index of the node, starting at zero
 * Return: returns nth node, if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int ct = 0;

	ptr = head;
	while (ptr && ct < index)
	{
		ptr = ptr->next;
		ct++;
	}
	if (ptr)
		return (ptr);
	else
		return (NULL);
}
