#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds a node to the beginning of list_t
 * @head: beginning of node
 * @str: the string to be duplicated
 * Return: address of new element or null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = *head;

	*head = malloc(sizeof(list_t));

	if (!*head)
	{
		return (NULL);
	}
	while (str[length])
		length++;
	(*head)->len = length;
	if (str)
	{
		(*head)->str = strdup(str);
		if (!(*head)->str)
		{
			free(*head);
			return (NULL);
		}
	}
	else
		(*head)->str = NULL;
	(*head)->next = temp;
	return (*head);
}
