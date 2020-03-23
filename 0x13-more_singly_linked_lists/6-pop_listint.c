#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the start of list
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (n);
}
