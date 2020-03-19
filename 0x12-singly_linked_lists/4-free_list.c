#include <stdlib.h>
#include <stdio.h>
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
	list_t *current = head;

	while (head != NULL)
	{
		current = head;
		free(current->str);
		free(current);
		head = head->next;
	}

}
