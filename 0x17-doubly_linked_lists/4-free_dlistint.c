#include "lists.h"

/**
 * free_dlistint - frees an integer linked list
 * @head: start of list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
