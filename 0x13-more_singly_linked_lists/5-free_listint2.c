#include "lists.h"

/**
 * free_listint2 - frees an integer linked list
 * @head: pointer to the start of list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *next;

	while (temp != NULL && head != NULL)
	{
		temp = next;
		next = temp->next;
		free(temp);
	}
	*head = NULL;
}
