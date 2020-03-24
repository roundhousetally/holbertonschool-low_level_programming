#include "lists.h"

/**
 * free_listint2 - frees an integer linked list
 * @head: pointer to the start of list
 * Return: void
 */

void free_listint2(listint_t **head)
{

	if (head == NULL)
		return;

	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	head = NULL;
}
