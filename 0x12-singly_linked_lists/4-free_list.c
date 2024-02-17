#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: list of nodes to be freed
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *ptr, *temp;

	ptr = head;
	while (ptr)
	{
		temp = ptr->next;
		free(ptr->str);
		free(ptr);
		ptr = temp;
	}
}
