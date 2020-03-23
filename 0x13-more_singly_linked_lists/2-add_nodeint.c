#include "lists.h"

/**
 * add_nodeint - adds an integer node to the beginning of listint_t
 * @head: head of the list
 * @n: integer to add to the list
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = *head;

	*head = malloc(sizeof(listint_t));

	if (!*head)
	{
		free(*head);
		return (NULL);
	}
	(*head)->n = n;
	(*head)->next = temp;

	return (*head);
}
