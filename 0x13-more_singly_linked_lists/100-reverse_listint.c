#include "lists.h"

/**
 * reverse_listint - reverses a linked list and returns a pointer
 * @head: pointer to the pointer to the head
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *prev, *next;

	prev = NULL;
	curr = *head;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (*head);
}
