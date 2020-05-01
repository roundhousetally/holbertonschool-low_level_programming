#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_dnodeint_end - adds a node to the end of dlistint_T
 * @head: beginning of node
 * @n: the data
 * Return: address of new element or null if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	temp = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		(*head) = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
