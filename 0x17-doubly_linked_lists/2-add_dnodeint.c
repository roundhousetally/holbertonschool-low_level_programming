#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_dnodeint - adds a node to the beginning of list_t
 * @head: beginning of node
 * @n: the data
 * Return: address of new element or null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = *head;

	*head = malloc(sizeof(dlistint_t));

	if (!*head)
	{
		return (NULL);
	}
	if (n)
	{
		(*head)->n = n;
		if (!(*head)->n)
		{
			free(*head);
			return (NULL);
		}
	}
	else
		(*head)->n = '\0';
	(*head)->next = temp;
	(*head)->prev = NULL;
	if (temp != NULL)
		temp->prev = *head;
	temp = *head;
	free(temp);
	return (*head);
}
