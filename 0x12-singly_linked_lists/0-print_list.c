#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_list - prints all elements of a linked list.
 *@h: the pointer to the linked list.
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;
	const list_t *temp;

	i = 0;
	temp = h;
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		temp = temp->next;
		i = 1;
	}
	while (temp != NULL)
	{
		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
		i++;
	}
	return (i);
}
