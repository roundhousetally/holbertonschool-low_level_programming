#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free's a linked list
 * @head: the head of the list to free
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *p = head;
	list_t *temp = NULL;

	if (head == NULL)
		return;
	while (p != NULL)
	{
		temp = p->next;
		free(p->str);
		free(p);
		p = temp;
	}
	free(p->str);
	free(temp);
}
