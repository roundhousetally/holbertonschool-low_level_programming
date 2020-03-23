#include "lists.h"

/**
 * free_listint - frees an integer linked list
 * @head: start of list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
