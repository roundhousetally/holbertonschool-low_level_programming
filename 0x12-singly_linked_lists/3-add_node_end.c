#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: start of list
 * @str: pointer to info to copy to end
 * Return: address of new element or Null if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;
	int len;
	char *cpy;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	cpy = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
		;
	new->str = cpy;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
	}
	return (*head);
}
