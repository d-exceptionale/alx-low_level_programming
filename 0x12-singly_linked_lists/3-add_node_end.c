#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to pointer to first node
 * @str: value of the node
 * Return: pointer to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nodes, *temp;

	nodes = *head;
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp->str);
		return (NULL);
	}
	temp->len = strlen(str);
	temp->next = NULL;

	while (nodes && nodes->next != NULL)
		nodes = nodes->next;

	if (nodes)
		nodes->next = temp;
	else
		*head = temp;

	return (temp);

}
