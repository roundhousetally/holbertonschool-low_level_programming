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
	list_t *p;

	while (p)
	{
		p = head;
		head = head->next;
		free(p->str);
		free(p);
	}

}
