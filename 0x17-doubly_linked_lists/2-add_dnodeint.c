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
	dlistint_t *new_node, *temp;

	temp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (head == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		(*head) = new_node;
		new_node->next = NULL;
		return (*head);
	}
	new_node->next = temp;
	temp->prev = new_node;
	(*head) = new_node;
	return (*head);

}
